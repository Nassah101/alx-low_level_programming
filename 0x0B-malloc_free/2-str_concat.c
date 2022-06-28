#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* str_concat - entry point
* @s1: string 1
* @s2: string 2
* Return: pointer should point to a newly allocated space in memory or NULL
*/
char *str_concat(char *s1, char *s2)
{
int i, j, k;
char *newstr = NULL;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (i = 0; s1[i] != '\0'; i++)
;
for (j = 0; s2[j] != '\0'; j++)
;
newstr = (char*)malloc((i + j) * sizeof(char));
if (newstr == NULL)
return (NULL);
for (k = 0; s1[k] != '\0'; k++)
newstr[k + i] = s2[k];
return (newstr);
}
