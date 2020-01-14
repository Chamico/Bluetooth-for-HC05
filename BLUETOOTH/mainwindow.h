#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QApplication>
#include <QMainWindow>
#include "ui_mainwindow.h"

#include "head.h"



namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    Socket *mainwindow_socket;
    Bluetooth *mainwindow_bluetooth;
    Thread *mainwindow_thread;

public slots:
    void SystemError(QString);
    void SystemOutput(QString);
    void RBBluetoothOpen();
    void RBBluetoorhClose();

private:

     Ui::MainWindow *ui;

     void InitWindowGUI();


     void InitSignals();


};

#endif // MAINWINDOW_H
