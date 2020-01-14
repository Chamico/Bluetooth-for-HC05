#include "bluetooth.h"


Bluetooth::Bluetooth(QObject *parent) : QObject(parent)
{
    bluetooth_socket = new Socket(this);
}


