#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    uart_ = new Uart();
    timer_receive_data = new QTimer(this);
    ui->setupUi(this);
    // 连接信号槽
    ConnectSingnal();
}

void MainWindow::ConnectSingnal(){
    bool temp1 = connect(ui->radioButton_bluetooth_open, SIGNAL(clicked(bool)), this, SLOT(BluetoothOpen()));
    bool temp2 = connect(ui->radioButton_bluetooth_close, SIGNAL(clicked(bool)), this, SLOT(BluetoothClose()));
    bool temp3 = connect(ui->_pushButton_refresh,SIGNAL(clicked(bool)),this,SLOT(BluetoothRefresh()));

    bool tempz = connect(timer_receive_data, SIGNAL(timeout()), this, SLOT(UpdateReceive()));

    bool tempa = connect(uart_,SIGNAL(signals_uart_radioButton_bluetooth_close_setChecked(bool)),this,SLOT(RadioButtonCloseSetChecked(bool)));
    bool tempb = connect(uart_,SIGNAL(signals_uart_radioButton_bluetooth_open_setChecked(bool)),this,SLOT(RadioButtonOpenSetChecked(bool)));
    bool tempc = connect(uart_,SIGNAL(signals_uart_comboBox_avaliable_serialport_Set(QString)),this,SLOT(ComboBoxAvaliableSerialPortSet(QString)));
    if(temp1
            && temp2
            && temp3
            && tempz
            && tempa
            && tempb
            && tempc
            ){
        ui->label->setText("good");
    }else{

        ui->label->setText("bad");
    }

    timer_receive_data->start();  // 50 ms 接收一次数据
    timer_receive_data->setInterval(500);
}


void MainWindow::BluetoothOpen(){
    if(ui->radioButton_bluetooth_close->isChecked()){
        ui->radioButton_bluetooth_close->setChecked(false);
    }

    uart_->UartOpen();
}

void MainWindow::BluetoothClose(){
    if(ui->radioButton_bluetooth_open->isChecked()){
        ui->radioButton_bluetooth_open->setChecked(false);
    }

    // 关闭串口
    uart_->UartClose();
}

void MainWindow::BluetoothRefresh(){
    uart_->UartOpen();
}

void MainWindow::UpdateReceive(){

    int count = 0, head = 0,tail = 0;
    QString temp = "";

    QString my_string = uart_->UartGetData();

    if(my_string == NULL){
        return;
    }

     for (int i = my_string.length() - 1;i >= 0; --i) {
         if(my_string.at(i) == '*'){
             count++;

             if(count == 1){
                 tail = i;
             }
             if(count == 2){
                 head = i;
                 temp = my_string.mid(head + 1, tail - 1);
                 break;
             }
         }
     }

     if(temp.at(temp.length() - 1) != ';'){
         return;
     }else{
         ui->plainTextEdit->appendPlainText(temp);
         ui->plainTextEdit->insertPlainText("\n\n");
     }


}

MainWindow::~MainWindow()
{
    delete ui;
    delete uart_;
}




void MainWindow::RadioButtonCloseSetChecked(bool variable){
   ui->radioButton_bluetooth_close->setChecked(variable);
}

void MainWindow::RadioButtonOpenSetChecked(bool variable){
   ui->radioButton_bluetooth_open->setChecked(variable);
}

void MainWindow::ComboBoxAvaliableSerialPortSet(QString str){
    ui->comboBox_avaliable_serialport->clear();
    ui->comboBox_avaliable_serialport->addItem(str + "  Serial Port");
}

