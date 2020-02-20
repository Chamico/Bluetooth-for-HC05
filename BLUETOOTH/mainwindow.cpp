#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);


    uart_ = new Uart();
    widget_ = new Widget(this);

    glwidget_ = new GLWidget(this);
    timer_receive_data = new QTimer(this);



//    // 连接信号槽
    ConnectSingnal();
    widget_->WidgetInitial();
    glwidget_->setGeometry(0,140,400,400);

}

void MainWindow::ConnectSingnal(){
    bool temp1 = connect(widget_->radio_button_bluetooth_open, SIGNAL(clicked(bool)), this, SLOT(BluetoothOpen()));
    bool temp2 = connect(widget_->radio_button_bluetooth_close, SIGNAL(clicked(bool)), this, SLOT(BluetoothClose()));

    bool tempz = connect(timer_receive_data, SIGNAL(timeout()), this, SLOT(UpdateReceive()));

    bool tempa = connect(uart_,SIGNAL(signals_uart_radioButton_bluetooth_close_setChecked(bool)),this,SLOT(RadioButtonCloseSetChecked(bool)));
    bool tempb = connect(uart_,SIGNAL(signals_uart_radioButton_bluetooth_open_setChecked(bool)),this,SLOT(RadioButtonOpenSetChecked(bool)));
    bool tempc = connect(uart_,SIGNAL(signals_uart_comboBox_avaliable_serialport_Set(QString)),this,SLOT(ComboBoxAvaliableSerialPortSet(QString)));
    bool tempd = connect(this,SIGNAL(signals_mainwindow_send_data(QString)),widget_,SLOT(LineChartGetdata(QString)));
    if(temp1
            && temp2
//            && temp3
            && tempz
            && tempa
            && tempb
            && tempc
            && tempd
            ){
        widget_->label_bluetooth_contronl->setText("good");
    }else{

        widget_->label_bluetooth_contronl->setText("bad");
    }

    timer_receive_data->start();  // 50 ms 接收一次数据
    timer_receive_data->setInterval(100);
}


void MainWindow::BluetoothOpen(){
    if(widget_->radio_button_bluetooth_close->isChecked()){
        widget_->radio_button_bluetooth_close->setChecked(false);
    }

    ConnectSingnal();
    uart_->UartOpen();
}

void MainWindow::BluetoothClose(){
    if(widget_->radio_button_bluetooth_open->isChecked()){
        widget_->radio_button_bluetooth_open->setChecked(false);
    }

    // 关闭串口
    uart_->UartClose();
}

void MainWindow::BluetoothRefresh(){
    uart_->UartOpen();
}

void MainWindow::UpdateReceive(){

    my_string = uart_->UartGetData();

    if(my_string.isEmpty()){
        return;
    }

    length = my_string.length();

     for (i = length - 1;i >= 0; --i) {
         if(my_string.at(i) == '*'){
             count++;

             if(count == 1){
                 tail = i;
             }
             if(count == 2){
                 head = i;
                 temp = my_string.mid(head + 1, tail - head - 1);
                 break;
             }
         }
     }

     count = 0;
     if(temp.isEmpty()){
         return;
     }
     widget_->plain_text_edit_origin_data->appendPlainText(temp);
     widget_->plain_text_edit_origin_data->appendPlainText("\n");

     emit signals_mainwindow_send_data(temp);
     //widget_->LineChartDraw();
     glwidget_->UpdateOpenGL(widget_->gyrox,widget_->gyroy,widget_->gyroz);
     //glwidget_->paintGL();

}

MainWindow::~MainWindow()
{
    delete ui;
    delete uart_;
}



void MainWindow::RadioButtonOpenSetChecked(bool variable){
   widget_->radio_button_bluetooth_open->setChecked(variable);
}

void MainWindow::RadioButtonCloseSetChecked(bool variable){
   widget_->radio_button_bluetooth_close->setChecked(variable);
}



void MainWindow::ComboBoxAvaliableSerialPortSet(QString str){
    widget_->combo_box__uart_number_avalible->clear();
    widget_->combo_box__uart_number_avalible->addItem(str + "  Serial Port");
}


