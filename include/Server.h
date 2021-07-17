#pragma once

#include <iostream>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>
#include <string.h>

using namespace std;

/*
  Server.h

  This class manages the network requests.

*/

class Server {

  public:
    Server();
    void start(int port);
    string on_request(string command);

  private:
    int sockfd;
    struct sockaddr_in address;

};