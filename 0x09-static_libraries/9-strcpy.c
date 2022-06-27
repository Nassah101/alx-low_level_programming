#include "main.h"
#include <stdio.h>
/**
* *_strcpy - check the code for main
* @dest: destination string
* @src: string to be copied from
* Return: always 0
*/
char *_strcpy(char *dest, char *src)
{
int i, j;
i = 0;
while (src[i] != 0)
i++;
for (j = 0; j <= i; j++)
dest[j] = src[j];
return (dest);
}
