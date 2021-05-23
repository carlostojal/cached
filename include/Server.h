#pragma once

#include <iostream>

class Server {

  public:
    Server();
    void start();

  private:
    int sockfd;

};