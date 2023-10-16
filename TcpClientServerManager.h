#ifndef __TCPCLIENTSERVERMANAGER__
#define __TCPCLIENTSERVERMANAGER__

class TCPServerController;

class TCPClientServerManager{
private:
    


public:
    TCPServerController* tcpServerCtrl;
    TCPClientServerManager(TCPServerController*);
    ~TCPClientServerManager();

    void StartTcpClientServerManagerThread();
};

#endif