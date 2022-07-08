#ifndef FUNCTION_POINTERS_H_
#define FUNCTION_POINTERS_H_
#include <stdio.h>
#include <stdlib.h>
int int_index(int *array, int size, int (*cmp)(int));
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, int size_t size, void (*action)(int));
#endif
