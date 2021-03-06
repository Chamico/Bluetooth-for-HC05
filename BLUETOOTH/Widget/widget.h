#ifndef WIDGET_H
#define WIDGET_H

#include "head.h"
QT_CHARTS_USE_NAMESPACE
class Widget : public QObject
{
    Q_OBJECT

private slots:
    void LineChartGetdata(QString);
    void LineChartAccClicked(const QPointF &point);
    void LineChartGyroClicked(const QPointF &point);
private:

    QString temp;

    int temperature_max = 0, gyrox_max = 0, gyroy_max = 0, gyroz_max = 0, accx_max = 0, accy_max = 0, accz_max = 0;
    int temperature_min = 0, gyrox_min = 0, gyroy_min = 0, gyroz_min = 0, accx_min = 0, accy_min = 0, accz_min = 0;


    QValueAxis *axis_x_gyro;
    QValueAxis *axis_y_gyro;
    QPen pen_groyx;
    QPen pen_groyy;
    QPen pen_groyz;


    QValueAxis *axis_x_acc;
    QValueAxis *axis_y_acc;
    QPen pen_accx;
    QPen pen_accy;
    QPen pen_accz;


    void LabelBluetoothContronl();
    void RadioButtonBluetoothOpen();
    void RadioButtonBLuetoothClose();
    void LabelUartNumberAvalible();
    void ComboBoxUartNumberAvalible();
    void PlainTextEditOriginData();
    void SpinBoxSetTimerInterval();
    void LabelSpinBox();
    void LineChartInitial();


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

    QLabel *label_spin_box_head;
    QSpinBox *spin_box_set_timer_interval;
    QLabel *label_spin_box_tail;

    QChart *chart_gyro;
    QChartView *chart_view_gyro;
    QLineSeries *line_series_gyrox;
    QLineSeries *line_series_gyroy;
    QLineSeries *line_series_gyroz;

    QChart *chart_acc;
    QChartView *chart_view_acc;
    QLineSeries *line_series_accx;
    QLineSeries *line_series_accy;
    QLineSeries *line_series_accz;


    void LineChartDraw();
    void SetSystemLayout(QWidget *parent = nullptr);

    int temperature = 0, gyrox = 0, gyroy = 0, gyroz = 0, accx = 0, accy = 0, accz = 0;
};

#endif // WIDGET_H
