#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* _strdup - function that returns a pointer to a newly allocated space in
* memory, which contains a copy of the string
* @str: char string to be copied
* Return: char pointer to the duplicated string. Return NULL if insufficient
* memory was available to array or if array is NULL
*/
char *_strdup(char *str)
{
char *dup;
int i, l;
if (str == NULL)
return (NULL);
l = 0;
for (i = 0; str[i] != '\0'; i++)
l++;
dup = malloc(sizeof(char) * l + 1);
if (dup == NULL)
return (NULL);
for (i = 0; i < l; i++)
dup[i] = str[i];
dup[l] = '\0';
return (dup);
}
