#include <iostream>
#include "../include/Server.h"
#include "../include/StorageWrapper.h"
#include "../include/StorageObject.h"

using namespace std;

// this object controls all storage (cache and persistent)
StorageWrapper storage;

int main() {

    // initialize server instance
    Server server;
    server.start();

    // some storage tests
    storage.set(StorageObject("null", "Hello World"));
    cout << storage.get("hello").value << endl;

    return 0;
}

// implementation of the server request event
void Server::on_request(string command) {

}
