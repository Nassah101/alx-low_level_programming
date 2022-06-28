#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* free_grid - function that fress a 2D grid of int pointers
* @grid: int double pointer to be freed
* @height: int for height of 2D array to be passed
* Return: void
*/
void free_grid(int **grid, int height)
{
int k;
for (k = 0; k < height; k++)
free(grid[k]);
free(grid);
}
