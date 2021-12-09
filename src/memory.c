#include "../include/memory.h"

void memory_init(struct cached_node_t* list_head) {

    list_head = malloc(sizeof(struct cached_node_t));
    list_head->next = NULL;
}

bool memory_key_exists(char key[CACHED_MAX_KEY_LEN], struct cached_node_t* list_head) {

    bool exists;
    struct cached_node_t *n;

    exists = false;
    n = list_head->next;

    while(n) {

        if(strcmp(key, n->key) == 0) {
            exists = true;
            break;
        }
    }    

    return exists;
}

void* memory_get_item(char key[CACHED_MAX_KEY_LEN], struct cached_node_t* list_head) {

    void *p;
    struct cached_node_t* n;

    p = NULL;
    n = list_head->next;

    while(n) {

        if(strcmp(key, n->key) == 0) {
            p = n->pointer;
        }

        n = n->next;
    }

    return p;

}

void memory_set_item(char key[CACHED_MAX_KEY_LEN], void* pointer, struct cached_node_t* list_head) {

    // adds a new element to the list tail
    // (if it doesn't exist)

    bool exists;
    struct cached_node_t* new;
    struct cached_node_t* p;

    exists = false;
    new = malloc(sizeof(struct cached_node_t));
    p = list_head;

    while(p->next) {

        // check if the key exists
        if(strcmp(key, p->key) == 0) {
            p->pointer = pointer;
        }

        p = p->next;
    }

    if(!exists) {
        p->next = new;
    }
}