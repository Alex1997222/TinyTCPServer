#ifndef __TCPDBMANAGER__
#define __TCPDBMANAGER__

#include <list>

class TCPServerController;

class TCPClientDBManager{
private:

public:
    TCPServerController* tcpServerCtrl;
    TCPClientDBManager(TCPServerController*);
    ~TCPClientDBManager();

    void StartTcpClientDBManagerThread();
};

#endif