#pragma once

#include <iostream>

using namespace std;

/*
  Server.h

  This class manages the network requests.

*/

class Server {

  public:
    Server();
    void start();
    void on_request(string command);

  private:
    int sockfd;

};