#include <iostream>
#include "tcpServer.h"
using namespace std;

int main()
{
    tcpServer tcp;

    tcp.setListen(8899);
    tcp.acceptConn();

    while(1)
    {
        string date = tcp.recvMsg();
        cout<<date;
    }
    return 0;
}