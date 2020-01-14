#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    mainwindow_socket = new Socket(this);
    mainwindow_bluetooth = new Bluetooth(this);

    InitWindowGUI();
    InitSignals();

    
}


void MainWindow::InitSignals(){

    bool temp1 = connect(ui->radioButton_bluetooth_open, SIGNAL(toggled(bool)), this, SLOT(RBBluetoothOpen()));
    bool temp2 = connect(ui->radioButton_bluetooth_close, SIGNAL(toggled(bool)), this, SLOT(RBBluetoorhClose()));
    bool temp3 = connect(mainwindow_socket, SIGNAL(socket_system_error(QString)), this, SLOT(SystemError(QString)), Qt::BlockingQueuedConnection);

    bool temp4 = connect(mainwindow_socket, SIGNAL(socket_system_output(QString)), this, SLOT(SystemOutput(QString)), Qt::QueuedConnection);

    bool temp5 = connect(mainwindow_bluetooth, SIGNAL(bluetooth_system_error(QString)), this, SLOT(SystemError(QString)));



    if(temp1 & temp2 && temp3 && temp4 && temp5){
        SystemOutput("Signal connect Successfully!\n");
    }else{
        SystemOutput("Signal connect failed!");
    }
}

void MainWindow::SystemError(QString string){
    ui->pte_system_error->insertPlainText(string + "\n");
}

void MainWindow::SystemOutput(QString string){
    ui->pte_system_output->insertPlainText(string + "\n");
}

void MainWindow::InitWindowGUI(){

    ui->pte_system_output->clear();
    ui->pte_system_error->clear();
}

void MainWindow::RBBluetoothOpen(){

   // mainwindow_socket->InitSocket();
    mainwindow_thread = new Thread();
    connect(mainwindow_thread, &Thread::finished, mainwindow_thread, &QObject::deleteLater);
    bool temp = connect(mainwindow_thread, &Thread::thread_output, this, &MainWindow::SystemOutput);
    mainwindow_thread->start();

    qDebug() <<  "radio open";
    if(temp){
        qDebug() << "good";
    }else{
        qDebug() << "bad";
    }
}

void MainWindow::RBBluetoorhClose(){
    mainwindow_thread->quit();
    //mainwindow_thread->wait();
}




MainWindow::~MainWindow()
{
    delete ui;
}
