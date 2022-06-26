#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"
/**
* check_digit - checks if a given char is number or not
* @argc: number of command line arguments
* @argv: Array name
* Return: 1 if a non-integer is among the passed in arguments, 0 otherwise
*/
int main(int argc, char *argv[])
{
int i, j, lenght, sum;
char *ptr;
if (argc < 2)
printf("0\n");
else
{
sum = 0;
for (i = 1; i < argc; i++)
{
ptr = argv[i];
lenght = strlen(ptr);
for (j = 0; j < lenght; j++)
{
if (isdigit(*(ptr + j)) == 0)
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
}
return (0);
}
