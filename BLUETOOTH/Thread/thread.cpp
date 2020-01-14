#include "thread.h"

Thread::Thread()
{
    //thread_socket = new Socket(this);

    //thread_socket->StartSocket();
    thread_socket = new Socket(this);
    qDebug() << "thread 构造函数";
}

void Thread::test(){
     qDebug() << "thread test()";
    thread_socket->StartSocket();
}

