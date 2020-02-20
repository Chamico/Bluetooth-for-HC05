#include "widget.h"

Widget::Widget(QWidget *main_window)
{
    label_bluetooth_contronl = new QLabel(main_window);
    radio_button_bluetooth_open = new QRadioButton(main_window);
    radio_button_bluetooth_close = new QRadioButton(main_window);

    label_uart_number_avalible = new QLabel(main_window);
    combo_box__uart_number_avalible = new QComboBox(main_window);

    plain_text_edit_origin_data = new QPlainTextEdit(main_window);

    chart_gyro = new QChart();
    chart_view_gyro = new QChartView(chart_gyro,main_window);
    axis_x_gyro = new QValueAxis();
    axis_y_gyro = new QValueAxis();
    line_series_gyrox = new QLineSeries();
    line_series_gyroy = new QLineSeries();
    line_series_gyroz = new QLineSeries();

    chart_acc = new QChart();
    chart_view_acc = new QChartView(chart_acc,main_window);
    axis_x_acc = new QValueAxis();
    axis_y_acc = new QValueAxis();
    line_series_accx = new QLineSeries();
    line_series_accy = new QLineSeries();
    line_series_accz = new QLineSeries();

}



void Widget::WidgetInitial(){
    LabelBluetoothContronl();
    RadioButtonBluetoothOpen();
    RadioButtonBLuetoothClose();
    LabelUartNumberAvalible();
    ComboBoxUartNumberAvalible();
    PlainTextEditOriginData();
    LineChartInitial();
    OpenGLInitial();
}

void Widget::LabelBluetoothContronl(){
//    常见权重
//    QFont::Light - 25        高亮
//    QFont::Normal - 50    正常
//    QFont::DemiBold - 63  半粗体
//    QFont::Bold - 75        粗体
//    QFont::Black - 87       黑体

    QFont font ( "Microsoft YaHei", 10, 75);  //第一个属性是字体（微软雅黑），第二个是大小，第三个是加粗（权重是75）
    label_bluetooth_contronl->setText("蓝牙控制");
    label_bluetooth_contronl->setFont(font);
    radio_button_bluetooth_open->setGeometry(0, 0, 15,20);
}

void Widget::RadioButtonBluetoothOpen(){
    QFont font ( "Microsoft YaHei", 10, 75);
    radio_button_bluetooth_open->setFont(font);
    radio_button_bluetooth_open->setText("开");
    radio_button_bluetooth_open->setGeometry(70, 8, 40,20);

}

void Widget::RadioButtonBLuetoothClose(){
    QFont font ( "Microsoft YaHei", 10, 75);
    radio_button_bluetooth_close->setFont(font);
    radio_button_bluetooth_close->setText("关");
    radio_button_bluetooth_close->setGeometry(110, 8, 40,20);

}

void Widget::LabelUartNumberAvalible(){
    QFont font ( "Microsoft YaHei", 10, 75);
    label_uart_number_avalible->setFont(font);
    label_uart_number_avalible->setText("可用串口");
    label_uart_number_avalible->setGeometry(0,30,60,20);
}

void Widget::ComboBoxUartNumberAvalible(){
    QFont font ( "Microsoft YaHei", 9, 50);
    combo_box__uart_number_avalible->setFont(font);
    combo_box__uart_number_avalible->addItem("None");
    combo_box__uart_number_avalible->setGeometry(60,30,60,20);
}

void Widget::PlainTextEditOriginData(){
    QFont font ( "Microsoft YaHei", 9, 50);
    plain_text_edit_origin_data->setFont(font);
    plain_text_edit_origin_data->setGeometry(0,50,400,80);
}

void Widget::LineChartInitial(){

    chart_gyro->setTitle("Gyro data");   //设置图表名称
    chart_gyro->addAxis(axis_x_gyro, Qt::AlignBottom);    //设置坐标轴
    chart_gyro->addAxis(axis_y_gyro, Qt::AlignLeft);
    axis_x_gyro->setRange(0,60);    // 设置坐标范围
    axis_y_gyro->setRange(0,200);
    axis_x_gyro->setTickCount(7);    //设置网格数量，5根线，四个网格
    axis_y_gyro->setTickCount(10);
    axis_x_gyro->setTitleText("X");
    axis_y_gyro->setTitleText("y");
    pen_groyx.setColor(Qt::yellow);
    pen_groyy.setColor(Qt::blue);
    pen_groyz.setColor(Qt::red);
    pen_groyx.setWidth(2);
    pen_groyy.setWidth(2);
    pen_groyz.setWidth(2);
    line_series_gyrox->setPen(pen_groyx);
    line_series_gyroy->setPen(pen_groyy);
    line_series_gyroz->setPen(pen_groyz);
    chart_gyro->addSeries(line_series_gyrox);
    chart_gyro->addSeries(line_series_gyroy);
    chart_gyro->addSeries(line_series_gyroz);
    chart_view_gyro->setGeometry(400,0,800,400);    //设置位置




    chart_acc->setTitle("Acceleration data");   //设置图表名称
    chart_acc->addAxis(axis_x_acc, Qt::AlignBottom);    //设置坐标轴
    chart_acc->addAxis(axis_y_acc, Qt::AlignLeft);
    axis_x_acc->setRange(0,60);    // 设置坐标范围
    axis_y_acc->setRange(-500,500);
    axis_x_acc->setTickCount(7);    //设置网格数量，5根线，四个网格
    axis_y_acc->setTickCount(10);
    axis_x_acc->setTitleText("X");
    axis_y_acc->setTitleText("y");
    pen_accx.setColor(Qt::red);
    pen_accy.setColor(Qt::green);
    pen_accz.setColor(Qt::black);
    pen_accx.setWidth(2);
    pen_accy.setWidth(2);
    pen_accz.setWidth(2);
    line_series_accx->setPen(pen_accx);
    line_series_accy->setPen(pen_accy);
    line_series_accz->setPen(pen_accz);
    chart_acc->addSeries(line_series_accx);
    chart_acc->addSeries(line_series_accy);
    chart_acc->addSeries(line_series_accz);
    chart_view_acc->setGeometry(400,400,800,400);    //设置位置

//    float y = 0;
//    for(float i = 0; i < 60; ++i){
//        y = sin(i);
//        qDebug() << i;
//        qDebug() <<  y * 500;
//        line_series_gyrox->append(i,y*500);
//    }


}

void Widget::LineChartGetdata(QString str){

    temp = str.section(';',0,0);
    temp = temp.mid(3,temp.length() - 3);
    temperature = temp.toInt();

    temp = str.section(';',1,1);
    temp = temp.mid(3,temp.length() - 3);
    gyrox = temp.toInt();

    temp = str.section(';',2,2);
    temp = temp.mid(3,temp.length() - 3);
    gyroy = temp.toInt();

    temp = str.section(';',3,3);
    temp = temp.mid(3,temp.length() - 3);
    gyroz = temp.toInt();

    temp = str.section(';',4,4);
    temp = temp.mid(3,temp.length() - 3);
    accx = temp.toInt();

    temp = str.section(';',5,5);
    temp = temp.mid(3,temp.length() - 3);
    accy = temp.toInt();

    temp = str.section(';',6,6);
    temp = temp.mid(3,temp.length() - 3);
    accz = temp.toInt();


//    if(gyrox > gyrox_max){
//        gyrox_max = gyrox;
//    }
//    if(gyrox < gyrox_min){
//        gyrox_min = gyrox;
//    }
//    qDebug() << "gyrox_max: " << gyrox_max <<"  gyrox_min: " << gyrox_min;


//    if(gyroy > gyroy_max){
//        gyroy_max = gyroy;
//    }
//    if(gyroy < gyroy_min){
//        gyroy_min = gyroy;
//    }
//    qDebug() << "gyroy_max: " << gyroy_max <<"  gyroy_min: " << gyroy_min;



//    if(gyroz > gyroz_max){
//        gyroz_max = gyroz;
//    }
//    if(gyroz < gyroz_min){
//        gyroz_min = gyroz;
//    }
//    qDebug() << "gyroz_max: " << gyroz_max <<"  gyroz_min: " << gyroz_min;
}

void Widget::LineChartDraw(){
    //line_series_accx->replace(10,accx);
    //line_series_accx->append(count_time,accx);
    line_series_accx->append(20,accx+100);
    line_series_accx->append(30,accx+2000);

    //line_series_accx->replace()
}

void Widget::OpenGLInitial(){

   // glwidget_->setGeometry(0,140,400,400);
    //glwidget_->GLWidgetStart();

}

void Widget::OpenGLDraw(){

}


void Widget::LayoutFinal(QWidget *parent){

}


Widget::~Widget(){

}
