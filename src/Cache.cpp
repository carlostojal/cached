#include "../include/Cache.h"

using namespace std;

Cache::Cache() {

}

StorageObject Cache::get(string key) {

  StorageObject obj;

  // search for the key in the storage vector and return the value
  for(unsigned int i = 0; i < storage.size(); i++) {

    StorageObject tmp = storage.at(i);

    if(tmp.key == key && ((int) tmp.cached_at + tmp.max_age) <= (int) time(nullptr) && tmp.max_age >= 0)
      obj = tmp;
  }

  return obj;
}

void Cache::set(StorageObject object) {

  bool found = false;

  // search for the key in the storage vector
  for(unsigned int i = 0; i < storage.size(); i++) {

    if(storage.at(i).key == object.key) {
      found = true;
      storage.at(i) = object;
    }
  }

  // if not found, create a new object
  if(!found)
    storage.push_back(object);
}