#include <stdio.h>
#include "cached.h"
#include "include/memory.h"
#include "include/storage.h"

struct cached_node_t* list_head;

void cached_init(void) {

    memory_init(list_head);

}

void* cached_get_item(char key[CACHED_MAX_KEY_LEN], int n_elements, int n_bytes) {

    void* pointer = NULL;

    // try to get from memory
    pointer = memory_get_item(key, list_head);

    if(!pointer) {
        
        // not found on memory, try to get from storage
        pointer = storage_get_item(key, n_elements, n_bytes);

        if(pointer) {
            // set memory with value got from storage
            memory_set_item(key, pointer, list_head);
        }
    }

    return pointer;
}


void cached_set_item(char key[CACHED_MAX_KEY_LEN], void* value, int n_elements, int n_bytes) {
    
    memory_set_item(key, value, list_head);
    storage_set_item(key, value, n_elements, n_bytes);

}