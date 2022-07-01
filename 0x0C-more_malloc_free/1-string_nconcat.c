#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* string_nconcat - concatenate the 2nd string to the 1st string up to n bytes
* @s1: destination string
* @s2: string to be merged with
* @n: number of bytes
* Return: pointer to first index of the concatenated string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, j, k;
char *ptr = NULL;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (i = 0; s1[i] != '\0'; i++)
ptr[i] = s1[i];
for (j = 0; s2[j] != '\0'; j++)
ptr[j] = s2[j];
if (j <= n)
n = j;
ptr = malloc((i + n + 1) * sizeof(char));
if (ptr == NULL)
return (NULL);
for (k = 0; s1[k] != '\0'; k++)
ptr[k] = s1[k];
for (k = 0; k < n; k++)
ptr[k + i] = s2[k];
ptr[k + i] = '\0';
return (ptr);
}
