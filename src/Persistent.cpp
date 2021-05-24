#include "../include/Persistent.h"

#include <fstream>

Persistent::Persistent() {

}

StorageObject Persistent::get(string key) {

  StorageObject obj;

  // read the file
  string temp;
  string path = "data/" + key + ".bin";

  ifstream f(path);

  // file couldnt be read
  if(!f.good())
    return obj;

  obj.key = key;
  while(f >> temp)
    obj.value += temp + " ";
  f.close();

  return obj;
}

void Persistent::set(StorageObject object) {

  // write to the file
  string path = "data/" + object.key + ".bin";

  ofstream f(path);

  f << object.value << endl;
  f.close();
}