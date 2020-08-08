#include <iostream>
#include <windows.h>

using namespace std;

#pragma comment(lib,"ws2_32.lib") //引用静态链接库



int  main()
{
    WORD wVersionRequested;
    WSADATA wsaData;
    int err;

    wVersionRequested = MAKEWORD(2,2);

    err =WSAStarup( wVersionRequested,&wsaData);
    if( err != 0)
    {
        //tell the user that we could nto find a usable
        //WinSock DLL;
        return 0;
    }
    if(LOBYTE(wsaData.wVersion)!=2||HIBYTE(wsaData.wVersion)!=2)
    {
        WSACleanup();
        return 0;
    }
    //The WinSock DLL is acceptable,Proceed  windows下版本的协商
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    SOCKET sockSer;//服务器套接字
    sockSer = socket(AF_INET,SOCK_STREAM,0);//创建套接字，AF_INET代表IP家族,0是默认的方式创建  有连接是流式 无连接是数据包套接字

    SOCKADDR_IN addrSer,addrCli;
    addrSer.sin_family = AF_INET;
    addrSer.sin_port = htons(5050);
    addrSer.sin_addr.S_un.S_addr = inet_addr("192.168.3.173");

    bind(sockSer,(SOCKADDR)*&addrSer,sizeof(SOCKADDR));//绑定套接字 跟服务器的相关地址信息进行绑定

    listen(sockSer,5);//监听套接字 5是队列大小

    SOCKET sockConn;//给出一个相应的套接字
    int len = sizeof(SOCKADDR);

    cout<<"Server Wait Client Connect......."<<endl;
    sockConn = accept(sockSer,(SOCKADDR*)&addrCli,&len);//处理新到连接 3个参数分别是服务器的套接字号；客户端地址，相应地址层度的地址以地址形式传递


    if (sockConn == INVALID_SOCKET);//INVALID_SOCKET非法套接字
    {
        cout<<"Server Accept Client Connect Fail"<<endl;
        return 0;
    }
    else
    {
        cout<<"Server Accept Client Connect Success"<<endl;
        return 0;
    }

    char sendbuf[256];
    char recvbuf[256];
    while(1)
    {
        cout<<"Ser：>";
        cin>>sendbuf;//缓冲区
        if(strcmp(sendbuf,"quit")==0);//相等表示服务器请求退出
        {
            break;
        }
        send(sockConn,sendbuf,strlen(sendbuf)+1,0);//发送服务器 +1为了字符串的/0  3个参数分别是要发送的套接字，缓冲，长度

        recv(sockConn,recvbuf,256,0);//接收
        cout<<"Cli:>"<<recvbuf<<endl;
    }

    closesocket(sockSer);//
    WSACleanup();//清除版本信息

}
