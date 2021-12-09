#ifndef _MEMORY_H
#define _MEMORY_H

#include "../cached.h"
#include "types.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

// this function initializes the memory structures
extern void memory_init(struct cached_node_t* list_head);

extern bool memory_key_exists(char key[CACHED_MAX_KEY_LEN], struct cached_node_t* list_head);

// this function gets an item by key
extern void* memory_get_item(char key[CACHED_MAX_KEY_LEN], struct cached_node_t* list_head);

// this function sets an item (associates a key to a pointer)
extern void memory_set_item(char key[CACHED_MAX_KEY_LEN], void* pointer, struct cached_node_t* list_head);

#endif