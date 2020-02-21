#include "widget.h"

Widget::Widget(QWidget *main_window)
{
    label_bluetooth_contronl = new QLabel(main_window);
    radio_button_bluetooth_open = new QRadioButton(main_window);
    radio_button_bluetooth_close = new QRadioButton(main_window);

    label_uart_number_avalible = new QLabel(main_window);
    combo_box__uart_number_avalible = new QComboBox(main_window);

    plain_text_edit_origin_data = new QPlainTextEdit(main_window);

    label_spin_box_head = new QLabel(main_window);
    spin_box_set_timer_interval = new QSpinBox(main_window);
    label_spin_box_tail = new QLabel(main_window);

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
    SpinBoxSetTimerInterval();
    LabelSpinBox();
    LineChartInitial();
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

void Widget::SpinBoxSetTimerInterval(){
    spin_box_set_timer_interval->setGeometry(80,540,50,20);
    spin_box_set_timer_interval->setMaximum(10000);
    spin_box_set_timer_interval->setMinimum(10);
    spin_box_set_timer_interval->setValue(100);
}

void Widget::LabelSpinBox(){
    label_spin_box_head->setText("刷新间隔");
    label_spin_box_head->setGeometry(0,540,80,20);
    label_spin_box_tail->setText("ms");
    label_spin_box_tail->setGeometry(130,540,40,20);
}

void Widget::LineChartInitial(){

    chart_gyro->setTitle("Gyro data");   //设置图表名称
    chart_gyro->setTitleFont(QFont("Microsoft YaHei", 11, 75));
    chart_gyro->addAxis(axis_x_gyro, Qt::AlignBottom);    //设置坐标轴
    chart_gyro->addAxis(axis_y_gyro, Qt::AlignLeft);
    axis_x_gyro->setRange(0,60);    // 设置坐标范围
    axis_y_gyro->setRange(-10000,10000);
    axis_x_gyro->setTickCount(7);    //设置网格数量，5根线，四个网格
    axis_y_gyro->setTickCount(10);
    axis_x_gyro->setTitleText("Time/s");
    axis_y_gyro->setTitleText("Gyro");
    axis_x_gyro->setLabelsFont(QFont("Microsoft YaHei", 10, 50));
    axis_y_gyro->setLabelsFont(QFont("Microsoft YaHei", 10, 50));
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
    line_series_gyrox->attachAxis(axis_x_gyro);
    line_series_gyrox->attachAxis(axis_y_gyro);
    line_series_gyroy->attachAxis(axis_x_gyro);
    line_series_gyroy->attachAxis(axis_y_gyro);
    line_series_gyroz->attachAxis(axis_x_gyro);
    line_series_gyroz->attachAxis(axis_y_gyro);
    line_series_gyrox->setUseOpenGL(true);
    line_series_gyrox->setName("gyrox");
    line_series_gyroy->setName("gyroy");
    line_series_gyroz->setName("gyroz");
    line_series_gyroy->setUseOpenGL(true);
    line_series_gyroz->setUseOpenGL(true);
    chart_view_gyro->setGeometry(400,0,1100,400);    //设置位置
    chart_view_gyro->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);



    chart_acc->setTitle("Acceleration data");   //设置图表名称
    chart_acc->setTitleFont(QFont("Microsoft YaHei", 11, 75));
    chart_acc->addAxis(axis_x_acc, Qt::AlignBottom);    //设置坐标轴
    chart_acc->addAxis(axis_y_acc, Qt::AlignLeft);
    axis_x_acc->setRange(0,60);    // 设置坐标范围
    axis_y_acc->setRange(-32800,32800);
    axis_x_acc->setTickCount(7);    //设置网格数量，5根线，四个网格
    axis_y_acc->setTickCount(10);
    axis_x_acc->setTitleText("Time/s");
    axis_y_acc->setTitleText("Acceleration");
    axis_x_acc->setLabelsFont(QFont("Microsoft YaHei", 10, 50));
    axis_y_acc->setLabelsFont(QFont("Microsoft YaHei", 10, 50));
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
    line_series_accx->attachAxis(axis_x_acc);
    line_series_accx->attachAxis(axis_y_acc);
    line_series_accy->attachAxis(axis_x_acc);
    line_series_accy->attachAxis(axis_y_acc);
    line_series_accz->attachAxis(axis_x_acc);
    line_series_accz->attachAxis(axis_y_acc);
    line_series_accx->setUseOpenGL(true);
    line_series_accy->setUseOpenGL(true);
    line_series_accz->setUseOpenGL(true);
    line_series_accx->setName("accx");
    line_series_accy->setName("accy");
    line_series_accz->setName("accz");
    chart_view_acc->setGeometry(400,400,1100,400);    //设置位置
    chart_view_acc->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
}

void Widget::LineChartGetdata(QString str){
//gyrox_max:  8245   gyrox_min:  -8315
//gyroy_max:  7443   gyroy_min:  -9259
//gyroz_max:  7855   gyroz_min:  -6286

//accx_max:  32767  accx_min:  -32768
//accy_max:  32767  accy_min:  -32768
//accz_max:  16996  accz_min:  -32768
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


    if(gyrox > gyrox_max){
        gyrox_max = gyrox;
    }
    if(gyrox < gyrox_min){
        gyrox_min = gyrox;
    }

    if(gyroy > gyroy_max){
        gyroy_max = gyroy;
    }
    if(gyroy < gyroy_min){
        gyroy_min = gyroy;
    }

    if(gyroz > gyroz_max){
        gyroz_max = gyroz;
    }
    if(gyroz < gyroz_min){
        gyroz_min = gyroz;
    }



    if(accx > accx_max){
        accx_max = accx;
    }
    if(accx < accx_min){
        accx_min = accx;
    }

    if(accy > accy_max){
        accy_max = accy;
    }
    if(accy < accy_min){
        accy_min = accy;
    }

    if(accz > accz_max){
        accz_max = accz;
    }
    if(accz < accz_min){
        accz_min = accz;
    }

//    qDebug() << "gyrox_max: " << gyrox_max <<"  gyrox_min: " << gyrox_min;
//    qDebug() << "gyroy_max: " << gyroy_max <<"  gyroy_min: " << gyroy_min;
//    qDebug() << "gyroz_max: " << gyroz_max <<"  gyroz_min: " << gyroz_min;
//    qDebug() << "accx_max: " << accx_max << " accx_min: " << accx_min;
//    qDebug() << "accy_max: " << accy_max << " accy_min: " << accy_min;
//    qDebug() << "accz_max: " << accz_max << " accz_min: " << accz_min;

}

void Widget::LineChartDraw(){

    static qreal count = 0;
    qreal interval = spin_box_set_timer_interval->text().toDouble();
    qreal count_x = 60/interval;



    line_series_accx->append(count, accx);
    line_series_accy->append(count, accy);
    line_series_accz->append(count, accz);

    line_series_gyrox->append(count, gyrox);
    line_series_gyroy->append(count, gyroy);
    line_series_gyroz->append(count, gyroz);

    count += count_x;

    if(count > 55){
        axis_x_acc->setRange(count-55,count+1);
        axis_x_gyro->setRange(count-55,count+1);
    }
}

void Widget::SetSystemLayout(QWidget *parent){
    QHBoxLayout *HL_bluetooth_contronl = new QHBoxLayout(parent);
    QHBoxLayout *HL_avaliable_uart = new QHBoxLayout(parent);
    QHBoxLayout *HL_refresh_interval = new QHBoxLayout(parent);

    QVBoxLayout *VL_bluetooth = new QVBoxLayout(parent);
    QVBoxLayout *VL_line_chart = new QVBoxLayout(parent);

    QGridLayout *GL_system = new QGridLayout(parent);

    HL_bluetooth_contronl->addWidget(label_bluetooth_contronl);
    HL_bluetooth_contronl->addWidget(radio_button_bluetooth_open);
    HL_bluetooth_contronl->addWidget(radio_button_bluetooth_close);

    HL_avaliable_uart->addWidget(label_uart_number_avalible);
    HL_avaliable_uart->addWidget(combo_box__uart_number_avalible);

    HL_refresh_interval->addWidget(label_spin_box_head);
    HL_refresh_interval->addWidget(spin_box_set_timer_interval);
    HL_refresh_interval->addWidget(label_spin_box_tail);

    VL_bluetooth->addLayout(HL_bluetooth_contronl);
    VL_bluetooth->addLayout(HL_avaliable_uart);
    VL_bluetooth->addWidget(plain_text_edit_origin_data);
    //VL_bluetooth->addWidget(glwidget_);
    VL_bluetooth->addLayout(HL_refresh_interval);

    VL_line_chart->addWidget(chart_view_gyro);
    VL_line_chart->addWidget(chart_view_acc);

    GL_system->addLayout(VL_bluetooth,1,1);
    GL_system->addLayout(VL_line_chart,1,2);

    parent->setLayout(GL_system);
}


void Widget::LineChartAccClicked(const QPointF &point){

    float a = point.y();
    QMessageBox msgBox;
    msgBox.setWindowTitle("Acceleration：X");
    msgBox.setText("当前值: " + QString("%1").arg(a) +
                   "\n最大值: " + QString("%1").arg(accx_max) +
                   "\n最小值: " + QString("%1").arg(accx_min));
    msgBox.resize(2000,40);
    msgBox.exec();

}

void Widget::LineChartGyroClicked(const QPointF &point){



    QMessageBox msgBox;
    msgBox.setText("The document has been modified.");
    msgBox.exec();
}



Widget::~Widget(){

}
