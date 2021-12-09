#ifndef _CACHED_H
#define _CACHED_H

// Cached: a key-value storage system.
// https://github.com/carlostojal/cached

#include <stdbool.h>

#define CACHED_MAX_KEY_LEN 50

// initialize engine
extern void cached_init(void);

// set an item
extern void* cached_get_item(char key[CACHED_MAX_KEY_LEN], int n_elements, int n_bytes);

// get an item
extern void cached_set_item(char key[CACHED_MAX_KEY_LEN], void* value, int n_elements, int n_bytes);

#endif