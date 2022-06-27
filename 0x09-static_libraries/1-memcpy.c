#include "main.h"
/**
* _memcpy - prints buffer in hexa
* @dest: Destination string for copying
* @src: string to be copied
* @n: number of bytes to be copied over
* Return: nothing
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
dest[i] = src[i];
return (dest);
}
