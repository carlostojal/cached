#pragma once

#include <iostream>
#include <vector>
#include "StorageObject.h"
#include "Cache.h"

using namespace std;

/*
  Persistent.h

  This class stores the storage objects
  and is responsible for getting and setting
  the values.

*/

class Persistent {

  public:
    Persistent();
    StorageObject get(string key);
    void set(StorageObject object);

  private:
    vector<StorageObject> storage;
};