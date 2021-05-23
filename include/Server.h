#pragma once

#include <iostream>

using namespace std;

class Server {

  public:
    Server();
    void start();

  private:
    int sockfd;

};