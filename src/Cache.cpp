#include "../include/Cache.h"

using namespace std;

Cache::Cache() {

}

string Cache::get(string key) {

  // search for the key in the storage vector and return the value
  for(unsigned int i = 0; i < storage.size(); i++) {

    if(storage.at(i).key == key)
      return storage.at(i).value;
  }

  return nullptr;
}

void Cache::set(string key, string value) {

  bool found = false;

  // search for the key in the storage vector
  for(unsigned int i = 0; i < storage.size(); i++) {

    if(storage.at(i).key == key) {
      found = true;
      storage.at(i).value = value;
    }
  }

  // if not found, create a new object
  if(!found) {
    StorageObject object;
    object.key = key;
    object.value = value;

    storage.push_back(object);
  }
}