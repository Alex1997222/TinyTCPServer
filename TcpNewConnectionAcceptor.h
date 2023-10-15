#ifndef __TCPCONNECTIONACCEPTOR__
#define __TCPCONNECTIONACCEPTOR__

#include "TcpServerController.h"

class TCPNewConnectionAcceptor{
private:
    


public:
    TCPServerController* tcpServerCtrl;
    TCPNewConnectionAcceptor(TCPServerController*){

    }
    ~TCPNewConnectionAcceptor(){

    }
    
};

#endif