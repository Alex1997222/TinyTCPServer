#include "TcpServerController.h"
#include "TcpClientDBManager.h"

TCPClientDBManager::TCPClientDBManager(TCPServerController* tcpServerCtrl){
    this->tcpServerCtrl = tcpServerCtrl;
}

TCPClientDBManager::~TCPClientDBManager(){

}

void
TCPClientDBManager::StartTcpClientDBManagerThread(){

}