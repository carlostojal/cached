#include "../include/storage.h"

void* storage_get_item(char key[CACHED_MAX_KEY_LEN], int n_elements, int n_bytes) {

    void* p;
    FILE* f;

    p = NULL;
    f = fopen(key, "rb");

    if(f) {
        fread(p, n_bytes, n_elements, f);
    }

    return p;

}

void storage_set_item(char key[CACHED_MAX_KEY_LEN], void* pointer, int n_elements, int n_bytes) {

    FILE* f;

    f = fopen(key, "wb");

    if(f) {
        fwrite(pointer, n_bytes, n_elements, f);
    }
}