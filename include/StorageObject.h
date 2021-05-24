#pragma once

#include <iostream>

using namespace std;

/*
  StorageObject.h

  This class is the basic storage unit.

*/

class StorageObject {

  public:
    StorageObject();
    StorageObject(string key, string value);
    StorageObject(string key, string value, int max_age);
    string key;
    string value;
    time_t cached_at;
    int max_age;
};