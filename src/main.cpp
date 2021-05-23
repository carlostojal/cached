#include <iostream>
#include "../include/Server.h"
#include "../include/Cache.h"

using namespace std;

// this object controls and stores cache
Cache cache;

int main() {

    Server server;

    server.start();

    cache.set("hello", "Hello World");
    cout << cache.get("hello") << endl;

    return 0;
}

// implementation of the server request event
void Server::on_request(string command) {

}
