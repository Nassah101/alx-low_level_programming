#include "main.h"
/**
* _strlen - check the code for string lenght
* @s: inputted string pointer
* Return: always 0
*/
int _strlen(char *s)
{
int i;
i = 0;
while (s[i] != '\0')
i++;
return (i);
}
