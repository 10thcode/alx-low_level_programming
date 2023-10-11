#ifndef HEADER
#define HEADER

#include <stdio.h>
#include <math.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_sub_array(int *array, size_t start, size_t end);
int jump_search(int *array, size_t size, int value);

#endif /* HEADER */
