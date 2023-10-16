#ifndef __TCPCONNECTIONACCEPTOR__
#define __TCPCONNECTIONACCEPTOR__

#include<pthread.h>

class TCPServerController;

class TCPNewConnectionAcceptor{
private:
    int acceptFd;
    pthread_t* acceptNewConnThread;

public:
    TCPServerController* tcpServerCtrl;
    TCPNewConnectionAcceptor(TCPServerController*);
    ~TCPNewConnectionAcceptor();
    
    void StartTcpNewConnectionAcceptorThread();
};

#endif