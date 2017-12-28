/*
ID: 318439981
Name: Matan Dombelski
ID: 315240564
Name: Arad Zulti
*/
#ifndef SERVER_H
#define SERVER_H


class Server {

public:

    Server();

    ~Server();

    void Start();
    void AcceptClient();
    //close server
    void Stop();
    void HandleClient(int client);


private:
    //initiate server - create socket, bind and listening
    void InitiateServer();

private:
    //members
    int port;
    int maxDataSizeToTransfer;
    int serverSocket;
};


#endif //SERVER_H
