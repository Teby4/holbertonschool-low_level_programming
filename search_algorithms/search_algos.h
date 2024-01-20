#ifndef search_algos_h
#define search_algos_h

#include <string.h>
#include <stdio.h>
#include <stddef.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

#endif
