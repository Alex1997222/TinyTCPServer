#include<stdio.h>
#include<assert.h>
#include<stdint.h>
#include"TcpServerController.h"
#include"network_utils.h"

TCPServerController::TCPServerController(
    std::string ip_addr,uint16_t port_no,std::string name){
    
    this->ip_addr = network_convert_ip_p_to_n(ip_addr.c_str());
    this->port_no = port_no;
    this->name = name;

    this->tcpNewConnectionAcceptor = new TCPNewConnectionAcceptor(this);
    this->tCPClientServerManager = new TCPClientServerManager(this);
    this->tcpClientDBManager = new TCPClientDBManager(this);
}

TCPServerController::~TCPServerController(){
    
}

void
TCPServerController::start(){
    //Start CRS Thread
    this->tcpNewConnectionAcceptor->StartTcpNewConnectionAcceptorThread();

    //Start DRS Thread
    this->tCPClientServerManager->StartTcpClientServerManagerThread();

    //Initialize the DMBS
    this->tcpClientDBManager->StartTcpClientDBManagerThread();
    
    printf("Tcp Server is Up and Running[%s,%d]\nOK\n",
    network_convert_ip_n_to_p(this->ip_addr,NULL),this->port_no);
}