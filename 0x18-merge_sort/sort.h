#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_array(const int *array, size_t size);
void merge_sort(int *array, size_t size);
void merge(int *array, int *left_array, int *right_array, size_t size);

#endif /* SORT_H */
