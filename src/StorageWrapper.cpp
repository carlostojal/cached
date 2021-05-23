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

  return obj;
}

void StorageWrapper::set(StorageObject object) {

  if(object.key == "null") {
    cout << "ERROR: \"null\" is a reserved key name." << endl;
    return;
  }

  persistent.set(object);
  cache.set(object);
}
