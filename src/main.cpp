#include <iostream>
#include <unistd.h>
#include "../include/Server.h"
#include "../include/StorageWrapper.h"
#include "../include/StorageObject.h"

using namespace std;

// this object controls all storage (cache and persistent)
StorageWrapper storage;

int main() {

    // initialize server instance
    Server server;
    server.start(2550);

    return 0;
}

// implementation of the server request event
string Server::on_request(string command) {

    cout << "RECEIVED" << command << endl;

    return "HELLO";
}
