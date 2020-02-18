#include "uart.h"

Uart::Uart()
{
    serial_port_ = new QSerialPort();
}


void Uart::UartOpen(){

    foreach (const QSerialPortInfo &info, QSerialPortInfo::availablePorts()){

        if(serial_port_name.compare(info.portName())){
            emit signals_uart_comboBox_avaliable_serialport_Set(info.portName());
            serial_port_->setPortName(info.portName());
        }else{
            serial_port_name = info.portName();
        }
    }


    // 以 读写模式 打开串口
    bool is_open = serial_port_->open(QIODevice::ReadWrite);

    if(is_open){
        emit signals_uart_radioButton_bluetooth_open_setChecked(true);
        serial_port_->setBaudRate(QSerialPort::Baud115200); // 设置波特率 115200
        serial_port_->setDataBits(QSerialPort::Data8);  // 设置数据位 8
        serial_port_->setFlowControl(QSerialPort::NoFlowControl);   // 设置流控制 无
        serial_port_->setParity(QSerialPort::NoParity);  // 设置奇偶校验 无
        serial_port_->setStopBits(QSerialPort::OneStop);    // 设置停止位 1
    }else{
        emit signals_uart_radioButton_bluetooth_close_setChecked(true);
    }
}


QString Uart::UartGetData(){

    QByteArray data = serial_port_->readAll();
    //QString str(data);
    QString str = data;
    //emit signals_uart_data(str);
    return str;
}


void Uart::UartClose(){

    serial_port_->close();
}




Uart::~Uart(){

    delete serial_port_;
}
