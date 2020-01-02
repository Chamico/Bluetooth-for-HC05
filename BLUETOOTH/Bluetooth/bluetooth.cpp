#include "bluetooth.h"



void MainWindow::RBBluetoothOpen(){

    if(ui->radioButton_bluetooth_close->isChecked()){
        ui->radioButton_bluetooth_close->setChecked(true);
    }
}

void MainWindow::RBBluetoothClose(){
    if(ui->radioButton_bluetooth_open->isChecked()){
        ui->radioButton_bluetooth_open->setChecked(true);
    }
}
