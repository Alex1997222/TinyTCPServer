#include "TcpServerController.h"

int
main(int argc,char** argv){
    
    TCPServerController* serverl = new 
    TCPServerController("127.0.0.1",40000,"Default TCP Server");
    serverl->start();
    scanf("\n");

    return 0;
}