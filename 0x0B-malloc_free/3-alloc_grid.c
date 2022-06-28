#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* alloc_grid - entry point
* @width: rows of matrix
* @height: columns of string
* Return: a pointer to a 2 dimensional array of integers or NULL
*/
int **alloc_grid(int width, int height)
{
int i, j;
int *ptr = NULL;
if (width <= 0 || height <= 0)
return (NULL);
ptr = (int *)malloc(width * height * sizeof(int));
for (i = 0; i < width * height; i++)
{
}
return (ptr);
}
