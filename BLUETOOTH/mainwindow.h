#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include "head.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

signals:

    void signals_mainwindow_send_data(QString);

private:

    Ui::MainWindow *ui;
    Uart *uart_;
    Widget *widget_;
    GLWidget *glwidget_;

    QTimer *timer_receive_data;


    int count = 0, head = 0,tail = 0, length = 0;
    QString temp = ""  ,my_string="";
    int i=0;

    void ConnectSingnal();




private slots:
    void BluetoothOpen();
    void BluetoothClose();
    void BluetoothRefresh();
    void UpdateReceive();
    void RadioButtonCloseSetChecked(bool);
    void RadioButtonOpenSetChecked(bool);
    void ComboBoxAvaliableSerialPortSet(QString);
    void SetTimerInterval(int);

};
#endif // MAINWINDOW_H
