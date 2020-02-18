#ifndef WIDGET_H
#define WIDGET_H

#include "head.h"

class Widget : public QObject
{
    Q_OBJECT


private:
    QHBoxLayout *horizon_layout_bluetooth_contronl;

    void LabelBluetoothContronl();
    void RadioButtonBluetoothOpen();
    void RadioButtonBLuetoothClose();
    void LabelUartNumberAvalible();
    void ComboBoxUartNumberAvalible();
    void PlainTextEditOriginData();
    void LayerOne(QWidget *parent = nullptr);

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    void WidgetInitial();

    QLabel *label_bluetooth_contronl;
    QRadioButton *radio_button_bluetooth_open;
    QRadioButton *radio_button_bluetooth_close;

    QLabel *label_uart_number_avalible;
    QComboBox *combo_box__uart_number_avalible;

    QPlainTextEdit *plain_text_edit_origin_data;


    void LayoutFinal(QWidget *parent = nullptr);
};

#endif // WIDGET_H
