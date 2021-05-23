#pragma once

#include <iostream>
#include <vector>
#include "StorageObject.h"

using namespace std;

/*
  Cache.h

  This class stores the cache storage objects
  and is responsible for getting and setting
  the values.

*/

class Cache {

  public:
    Cache();
    StorageObject get(string key);
    void set(StorageObject object);

  private:
    vector<StorageObject> storage;

};