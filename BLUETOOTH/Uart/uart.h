#ifndef UART_H
#define UART_H

#include "head.h"

class Uart : public QObject
{
    Q_OBJECT
public:
    Uart();
    ~Uart();

    void UartOpen();
    void UartClose();
    QString UartGetData();

signals:
    void signals_uart_radioButton_bluetooth_close_setChecked(bool);
    void signals_uart_radioButton_bluetooth_open_setChecked(bool);
    void signals_uart_comboBox_avaliable_serialport_Set(QString);

private:
    QString serial_port_name = "";

    QSerialPort *serial_port_;

};

#endif // UART_H
