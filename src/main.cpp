#include <iostream>
#include "../include/Server.h"
#include "../include/Cache.h"
#include "../include/Storage.h"

using namespace std;

// this object controls and stores cache
Cache cache;
Storage storage;

int main() {

    Server server;

    server.start();

    cache.set("hello", "Hello World");
    storage.set("hello", "Hello World");
    cout << cache.get("hello") << endl;
    cout << storage.get("hello") << endl;

    return 0;
}

// implementation of the server request event
void Server::on_request(string command) {

}
