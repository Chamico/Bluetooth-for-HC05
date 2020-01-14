#include "socket.h"

Socket::Socket(QObject *parent) : QObject(parent)
{
    //timer = new QTimer(this);
    //connect(timer, SIGNAL(timeout()), this, SLOT(TimerProcess()));
}




void Socket::StartSocket(){

    qDebug() << "socket startSocket()";

    //Thread *thread = new Thread();
    //connect(thread, &Thread::finished, thread, &QObject::deleteLater);

    InitSocket();

    qDebug() << "finish StartSokcet()";

}

bool Socket::InitSocket(){


    qDebug() << "init socket()";
    IntiWinsock();
    CreateSocket();
    BingingSocket();
    ListeningSocket();
    AcceptConnect();
    return true;
}




bool Socket::IntiWinsock(){
    //调用  WSAStartup() 用来启动WS2_32.dll
    //WSAStartup成功，返回0
    //MAKEWORD(2,2)调用2.2版
    iResult = WSAStartup(MAKEWORD(2,2), &wsaData);

    if(iResult != 0){
        emit socket_system_error("WSAStartup faild: " + QString::number(iResult));
        return false;
    }
    emit socket_system_output("Initial Winsock Successfully!");
    return true;
}

bool Socket::CreateSocket(){

    //	用 getaddrinfo 获得 结构体 sockaddr 的值
    ZeroMemory(&hints, sizeof(hints));
    hints.ai_family = AF_INET;
    hints.ai_socktype = SOCK_STREAM;
    hints.ai_protocol = IPPROTO_TCP;
    hints.ai_flags = AI_PASSIVE;

    //解析服务器要使用的本地地址和端口
    iResult = getaddrinfo(nullptr, DEFAULT_PORT, &hints, &result);

    if(iResult != 0){
        emit socket_system_error("getaddrinfo failed: " + QString::number(iResult));
        WSACleanup();
        return false;
    }

//	调用 Socket 函数
    //给客户端创建一个 SOCKET，监听客户端的连接
    ListenSocket = socket(result -> ai_family, result -> ai_socktype, result -> ai_protocol);

//	检查是否有错误，确保有效的套接字
    if(ListenSocket == INVALID_SOCKET){
        emit socket_system_error("Error at socket(): " + QString::number(WSAGetLastError()));
        freeaddrinfo(result);
        WSACleanup();
        return false;
    }

    emit socket_system_output("Create Socket Successfully!");
    return true;
}
bool Socket::BingingSocket(){

    iResult = bind(ListenSocket, result -> ai_addr,  (int)result -> ai_addrlen);
        if(iResult == SOCKET_ERROR){
            emit socket_system_error("Binding failed with error: " + QString::number(WSAGetLastError()));
            freeaddrinfo(result);
            closesocket(ListenSocket);
            WSACleanup();
            return false;
        }
    //	释放了 getaddrinfo 这个地址信息的功能
        freeaddrinfo(result);
        emit socket_system_output("Binding Sockt Successfully!");

    return true;
}
bool Socket::ListeningSocket(){

    //timer->start(1000);
    //int connect_result = 0;

    bool flag_even = true,flag_odd = true;

  //  while(1){
        emit socket_system_error("Waitting for connect Error: " + QString::number(WSAGetLastError()));
    qDebug() << "waitting for while(1)";
    //while(1);

//    if((timer_t % 2 == 0)&&(flag_even)){
//        flag_even = true;
//        flag_odd = false;
//        emit socket_system_error("Waitting for connect Error: " + QString::number(WSAGetLastError()));

//    }else if((timer_t % 2 == 1)&&(flag_odd)){
//        flag_even = false;
//        flag_odd = true;
//        emit socket_system_error("Waitting for connect Error: " + QString::number(WSAGetLastError()));
//    }

//    }

    socket_system_output("Listened a Socket Connetion!");
    return true;
}

bool Socket::AcceptConnect(){
    //接收客户端连接请求
    ClientSocket = INVALID_SOCKET;

    //	接受客户端连接请求
    if(ClientSocket == INVALID_SOCKET){
        emit socket_system_error("accpet failed: " + QString::number(WSAGetLastError()));
        closesocket(ListenSocket);
        WSACleanup();
        return false;
    }
    return true;
}

void Socket::TimerProcess(){

    timer_t++;
    if(timer_t >= 100){
        timer_t = 0;
    }
}


