#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* _strdup - entry point
* @str: string we need to duplicate
* Return: a pointer to the duplicated string or NULL
*/
char *_strdup(char *str)
{
int i = 0, j, k = 0;
char *newstr = NULL;
while (str[k] != '\0')
{
i++;
k++;
}
newstr = malloc(sizeof(char) * (i + 1));
if (str == NULL)
return (NULL);
for (j = 0; j <= i; j++)
newstr[j] = str[j];
return (newstr);
}
