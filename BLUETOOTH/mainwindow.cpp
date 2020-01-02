#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    Init_Signal();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::Init_Signal(void){

    connect(ui->radioButton_bluetooth_open,SIGNAL(toggled(bool)),this,SLOT(RBBluetoothOpen()));
    connect(ui->radioButton_bluetooth_close,SIGNAL(toggled(bool)),this,SLOT(RB_Bluetooth_Close()));

}



