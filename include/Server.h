#pragma once

#include <iostream>

using namespace std;

class Server {

  public:
    Server();
    void start();
    void on_request(string command);

  private:
    int sockfd;

};