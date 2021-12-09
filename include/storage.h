#ifndef _STORAGE_H
#define _STORAGE_H

#include "../cached.h"
#include "types.h"
#include <stdio.h>
#include <string.h>

extern void* storage_get_item(char key[CACHED_MAX_KEY_LEN], int n_elements, int n_bytes);

extern void storage_set_item(char key[CACHED_MAX_KEY_LEN], void* pointer, int n_elements, int n_bytes);

#endif