#pragma once

#include <iostream>
#include "Cache.h"
#include "Persistent.h"

using namespace std;

class StorageWrapper {

  public:
    StorageWrapper();
    StorageObject get(string key);
    void set(StorageObject object);
  
  private:
    Cache cache;
    Persistent persistent;
};