#include "../include/StorageObject.h"

using namespace std;

StorageObject::StorageObject() {
  this->key = "null";
  this->value = "";
  this->cached_at = time(nullptr);
  this->max_age = -1;
}

StorageObject::StorageObject(string key, string value) {
  this->key = key;
  this->value = value;
  this->cached_at = time(nullptr);
  this->max_age = -1;
}

StorageObject::StorageObject(string key, string value, int max_age) {
  this->key = key;
  this->value = value;
  this->cached_at = time(nullptr);
  this->max_age = max_age;
}