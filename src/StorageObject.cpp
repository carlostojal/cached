#include "../include/StorageObject.h"

using namespace std;

StorageObject::StorageObject() {

}

StorageObject::StorageObject(string key, string value) {
  this->key = key;
  this->value = value;
}