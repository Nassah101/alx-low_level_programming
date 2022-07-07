#include <stdio.h>
#include "function_pointers.h"
/**
* array_iterator(int *array, size_t size, void (*action)(int))
{
/* unsigned int, because size_t can never be negative */
unsigned int i;
void (*ptr)(int);
if (size <= 0)
return;
if (array == NULL || action == NULL)
return;
ptr = action;
for (i = 0; i < size; i++)
ptr(array[i]);
}
