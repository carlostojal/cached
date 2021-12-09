#ifndef _TYPES_H
#define _TYPES_H

#include "../cached.h"

struct cached_node_t {

    char key[CACHED_MAX_KEY_LEN];
    void* pointer;
    struct cached_node_t* next;
};

#endif