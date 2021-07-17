#include "../include/Server.h"


using namespace std;

Server::Server() {

}

void Server::start(int port) {

  int serverfd; // server socket 
  int clientfd; // cliente socket

  struct sockaddr_in serveraddr;

  char buffer[1024];

  cout << "** cachedb **" << endl;
  cout << "Starting server..." << endl;

  serverfd = socket(AF_INET, SOCK_STREAM, 0);
  if(serverfd < 0) {
    cout << "Error opening socket." << endl;
    return;
  }

  cout << "Socket created." << endl;

  int optval = 1;
  setsockopt(serverfd, SOL_SOCKET, SO_REUSEADDR, (const void *) &optval, sizeof(optval));

  serveraddr.sin_family = AF_INET;
  serveraddr.sin_addr.s_addr = htonl(INADDR_ANY);
  serveraddr.sin_port = htons((unsigned short) port);

  if(bind(serverfd, (struct sockaddr *) &serveraddr, sizeof(serveraddr)) < 0) {
    cout << "Error on binding" << endl;
    return;
  }

  cout << "Socket bind." << endl;

  if(listen(serverfd, 3) < 0) {
    cout << "Error on listen." << endl;
    return;
  }

  cout << "Socket listening." << endl;

  int addrlen = sizeof(serveraddr);

  cout << "Accepting connections." << endl;

  if(clientfd = accept(serverfd, (struct sockaddr *) &serveraddr, (socklen_t *) &addrlen) < 0) {
    cout << "Error accepting client" << endl;
    return;
  }

  cout << "Client accepted.";

  read(clientfd, buffer, 1024);

  string response = this->on_request(buffer);

  send(clientfd, response.c_str(), strlen(response.c_str()), 0);


}