#include "TcpServerController.h"
#include "TcpNewConnectionAcceptor.h"
#include<sys/socket.h>
#include<netinet/in.h>
#include<memory.h>

TCPNewConnectionAcceptor::TCPNewConnectionAcceptor(TCPServerController*){
    this->acceptFd = socket(AF_INET,SOCK_STREAM,IPPROTO_TCP);

    if(this->acceptFd<0){
        printf("Error:Could not create Accept FD\n");
        exit(0);
    }
    
    this->acceptNewConnThread = (pthread_t*)calloc(1,sizeof(pthread_t));
    
    this->tcpServerCtrl = tcpServerCtrl;
}

TCPNewConnectionAcceptor::~TCPNewConnectionAcceptor(){

}

void
TCPNewConnectionAcceptor::StartTcpNewConnectionAcceptorThread(){

}