#include "../include/StorageWrapper.h"
#include "../include/StorageObject.h"

using namespace std;

StorageWrapper::StorageWrapper() {
  cache = Cache();
  persistent = Persistent();
}

StorageObject StorageWrapper::get(string key) {

  StorageObject obj;

  obj = cache.get(key);
  if(obj.key != "null")
    return obj;

  obj = persistent.get(key);

  if(obj.key == "null")
    throw invalid_argument("KEY_NOT_FOUND");

  // update the cache
  cache.set(obj);

  return obj;
}

void StorageWrapper::set(StorageObject object) {

  if(object.key == "null")
    throw invalid_argument("KEY_NAME_NOT_ALLOWED");

  persistent.set(object);
  cache.set(object);
}
