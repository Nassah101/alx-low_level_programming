#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - gets the lenght of the input string
 * @str: string input
 * Return: Number of indexes in a string
 */
int _strlen(char *str)
{
  int i;
  for (i = 0; str[i]; i++)
