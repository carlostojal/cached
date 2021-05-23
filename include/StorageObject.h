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
    string key;
    string value;
    int created_at;
    int updated_at;
    int max_age;
};