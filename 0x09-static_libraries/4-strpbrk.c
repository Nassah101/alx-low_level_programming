#include "main.h"
/**
* _strpbrk - chec the code for a character
* @s: the arrat to be searched
* @accept: target bytes from searching
* Return: always 0
*/
char *_strpbrk(char *s, char *accept)
{
int i, j;
for (i = 0; accept[i]; i++)
{
for (j = 0; accept[j]; j++)
if (accept[j] == s[i])
return (s + i);
}
return (0);
}
