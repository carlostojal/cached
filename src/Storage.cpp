#include "../include/Storage.h"

#include <fstream>

Storage::Storage() {

}

string Storage::get(string key) {

  string value, temp;
  string path = "data/" + key + ".bin";

  ifstream f(path);

  while(f >> temp)
    value += temp;
  f.close();

  return value;
}

void Storage::set(string key, string value) {

  string path = "data/" + key + ".bin";

  ofstream f(path);

  f << value << endl;
  f.close();
}