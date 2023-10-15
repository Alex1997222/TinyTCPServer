#ifndef __TCPDBMANAGER__
#define __TCPDBMANAGER__

#include "TcpServerController.h"
#include <list>

class TCPClientDBManager{
private:

public:
    TCPServerController* tcpServerCtrl;
    TCPClientDBManager(TCPServerController*){

    }
    ~TCPClientDBManager(){

    }
    
};

#endif