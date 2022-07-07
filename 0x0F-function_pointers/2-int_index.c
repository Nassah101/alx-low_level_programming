#include <stdio.h>
#include "function_pointers.h"
/**
* int_index - searches the array for matching values depending on the function
* @array: the array being passed in
* @size: the number of indexes in the array
* @cmp: the pointer to a function
* Return: the index of the first match -1 if invalid size or no match
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size <= 0 || array == NULL || mp = NULL)
return (-1);
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
return (i);
}
return (-1);
}
