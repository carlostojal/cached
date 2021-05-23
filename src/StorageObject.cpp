#include "../include/StorageObject.h"

using namespace std;

StorageObject::StorageObject() {
  this->key = "null";
  this->value = "";
}

StorageObject::StorageObject(string key, string value) {
  this->key = key;
  this->value = value;
}