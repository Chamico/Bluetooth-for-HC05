#ifndef THREAD_H
#define THREAD_H

#include "head.h"


class Thread : public QThread
{
    Q_OBJECT

    void run() override{
        emit thread_output("cjfad;a");
        test();

    }

public:
    Thread();

    Socket *thread_socket;

signals:
    void thread_output(QString);


private:
    void test();

};

#endif // THREAD_H
