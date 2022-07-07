#include <stdio.h>
#include "function_pointers.h"
/**
* array_iterator - this function prints out all contents in the array
* @array: the array being passed in
* @size: the size of the array or the number of indexes
* @action: the pointer to a function
* Return: nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
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
