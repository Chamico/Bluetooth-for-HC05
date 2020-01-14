#ifndef BLUETOOTH_H
#define BLUETOOTH_H

#include "head.h"

class Bluetooth : public QObject
{
    Q_OBJECT
public:
    explicit Bluetooth(QObject *parent = nullptr);

    Socket *bluetooth_socket;

public: signals:
    void bluetooth_system_error(QString);

private:



};

#endif // BLUETOOTH_H
