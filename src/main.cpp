#include <iostream>
#include "../include/Server.h"

using namespace std;

int main()
{
    Server server;
    server.start();

    cout << "Hello world!" << endl;
    return 0;
}
