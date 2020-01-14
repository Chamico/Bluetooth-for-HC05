//  Copyright: None
//
//	Describe: This file include the winsocket server application,finish
//		the runing process of windows socket. The whole process on server
//		is described below:
//
//		Creating a Basic Winsock Application
//		Initializing Winsock
//		Creating a Socket for the Server
//		Binding a Socket
//		Listening on a Socket
//		Accepting a Connection
//		Receiving and Sending Data on the Server
//		Disconnecting the Server
//
//	Else: WSA: Windows Sockets Asynchronous
//
//	Author: Chamico
//	Modify: 2020/01/11

#ifndef SOCKET_H
#define SOCKET_H

#undef UNICODE

#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif

//#pragma comment (lib, "Ws2_32.lib")

#define DEFAULT_PORT "27015"
#define DEFAULT_BUFLEN 512

#include "windows.h"
#include "winsock2.h"
#include "ws2tcpip.h"


#include "head.h"

class Socket : public QObject
{
    Q_OBJECT
public:
    explicit Socket(QObject *parent = nullptr);

    void StartSocket();

signals:
    void socket_system_error(QString);
    void socket_system_output(QString);
    void socket_thread();

public slots:
    void TimerProcess();



private:
    int iResult;
    struct addrinfo *result = nullptr, *ptr = nullptr, hints;

    WSADATA wsaData;

    //	为服务器创建一个名为 ListenSocket 的SOCKET对象，以侦听客户端连接
    SOCKET ListenSocket = INVALID_SOCKET;

    //  为服务器创建一个名为 ClientSocket 的SOCKET对象，作为客户端
    SOCKET ClientSocket;


    bool IntiWinsock();
    bool CreateSocket();
    bool BingingSocket();
    bool ListeningSocket();
    bool AcceptConnect();
    bool InitSocket();

    QTimer *timer;
    int timer_t = 0;


};


#endif // SOCKET_H
