#include <iostream>
#include "../include/Server.h"
#include "../include/Cache.h"

using namespace std;

int main()
{
    Cache cache;
    Server server;

    server.start();

    cout << "Hello world!" << endl;
    return 0;
}
