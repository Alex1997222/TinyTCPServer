#include "TcpServerController.h"
#include "TcpClientServerManager.h"

TCPClientServerManager::TCPClientServerManager(TCPServerController* tcpServerCtrl){
    this->tcpServerCtrl = tcpServerCtrl;
}

TCPClientServerManager::~TCPClientServerManager(){

}

void
TCPClientServerManager::StartTcpClientServerManagerThread(){

}