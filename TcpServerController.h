#ifndef __TCPSERVER__
#define __TCPSERVER__

#include "TcpNewConnectionAcceptor.h"
#include "TcpClientServerManager.h"
#include "TcpClientDBManager.h"
#include <stdint.h>
#include <iostream>

class TCPServerController{
private:
    TCPNewConnectionAcceptor* tcpNewConnectionAcceptor;
    TCPClientDBManager* tcpClientDBManager;
    TCPClientServerManager* tCPClientServerManager;
public:
    uint32_t ip_addr;   //the ip address with 32bit
    uint16_t port_no;   //the port no with 16bit
    std::string name;
    TCPServerController(std::string ip_addr,uint16_t port_no,std::string name){
        
    }
    ~TCPServerController(){

    }
    void start();
    void stop();
};


#endif