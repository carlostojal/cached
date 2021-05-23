#pragma once

#include <iostream>

using namespace std;

class StorageObject {

  public:
    StorageObject();
    StorageObject(string key, string value);
    string key;
    string value;
    int created_at;
    int updated_at;
};