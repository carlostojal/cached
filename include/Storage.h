#pragma once

#include <iostream>
#include <vector>
#include "StorageObject.h"
#include "Cache.h"

using namespace std;

/*
  Storage.h

  This class stores the storage objects
  and is responsible for getting and setting
  the values.

*/

class Storage {

  public:
    Storage();
    string get(string key);
    void set(string key, string value);

  private:
    vector<StorageObject> storage;
};