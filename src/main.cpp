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
    server.start();

    // some storage tests
    try {
        storage.set(StorageObject("null", "Hello World"));
    } catch(invalid_argument &e) {
        cout << e.what() << endl;
    }

    try {
        cout << storage.get("hello").value << endl;
        cout << storage.get("hello").cached_at << endl;
    } catch(invalid_argument &e) {
        cout << e.what() << endl;
    }

    return 0;
}

// implementation of the server request event
void Server::on_request(string command) {

}
