#ifndef __TCPCLIENTSERVERMANAGER__
#define __TCPCLIENTSERVERMANAGER__

#include "TcpServerController.h"

class TCPClientServerManager{
private:
    


public:
    TCPServerController* tcpServerCtrl;
    TCPClientServerManager(TCPServerController*){

    }
    ~TCPClientServerManager(){

    }

    
};

#endif