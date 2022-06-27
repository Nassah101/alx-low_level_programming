#include "main.h"
/**
* _strchr - check the code for a character
* @s: the array to be searched
* @c: the character being searched
* Return: Always 0
*/
char *_strchr(char *s, char c)
int i;
for (i = 0; s[i]; i++)
{
if (s[i] == c)
return (s + i);
}
if (s[i] == c)
return (s + i);
else
return ('\0');
}
