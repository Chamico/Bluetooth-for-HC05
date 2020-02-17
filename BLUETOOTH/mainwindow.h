#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
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

private:

    Ui::MainWindow *ui;
    Uart *uart_;

    QTimer *timer_receive_data;

    void ConnectSingnal();



private slots:
    void BluetoothOpen();
    void BluetoothClose();
    void BluetoothRefresh();
    void UpdateReceive();
    void RadioButtonCloseSetChecked(bool);
    void RadioButtonOpenSetChecked(bool);
    void ComboBoxAvaliableSerialPortSet(QString);

};
#endif // MAINWINDOW_H
