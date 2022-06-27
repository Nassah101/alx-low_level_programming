#include "main.h"
/**
* _strcmp - check the code for string
* @s1: first string for comparison
* @s2: second string for comparison
* Return: always 0
*/
int _strcmp(char *s1, char *s2)
{
int i, value;
i = 0;
while (s1[i] != '\0')
{
if (s1[i] == s2[i])
{
value = s1[i] - s2[i];
i++;
}
else
{
value = s1[i] - s2[i];
break;
}
}
return (value);
}
