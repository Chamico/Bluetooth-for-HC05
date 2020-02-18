#include "widget.h"

Widget::Widget(QWidget *main_window)
{
    label_bluetooth_contronl = new QLabel(main_window);
    radio_button_bluetooth_open = new QRadioButton(main_window);
    radio_button_bluetooth_close = new QRadioButton(main_window);

    label_uart_number_avalible = new QLabel(main_window);
    combo_box__uart_number_avalible = new QComboBox(main_window);

    plain_text_edit_origin_data = new QPlainTextEdit(main_window);
}



void Widget::WidgetInitial(){
    LabelBluetoothContronl();
    RadioButtonBluetoothOpen();
    RadioButtonBLuetoothClose();
    LabelUartNumberAvalible();
    ComboBoxUartNumberAvalible();
    PlainTextEditOriginData();
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
    plain_text_edit_origin_data->setGeometry(0,50,500,200);
}




void Widget::LayerOne(QWidget *parent){

    horizon_layout_bluetooth_contronl->addWidget(label_bluetooth_contronl);
    horizon_layout_bluetooth_contronl->addWidget(radio_button_bluetooth_open);
    horizon_layout_bluetooth_contronl->addWidget(radio_button_bluetooth_close);


}


void Widget::LayoutFinal(QWidget *parent){
    horizon_layout_bluetooth_contronl = new QHBoxLayout(parent);

    LayerOne(parent);
    parent->setLayout(horizon_layout_bluetooth_contronl);
}


Widget::~Widget(){

}
