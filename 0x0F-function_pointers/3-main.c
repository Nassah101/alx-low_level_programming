#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
* main - program that prints the minimum number of coins to make
* change for an amount of money
* @argc: int of arguments passed into program including command
* @argv: array of pointers to the strings of argument
* Return: 0
*/
int main(int argc, char **argv)
{
int num1, num2, result;
if (argc != 4)
{
printf("Error\n");
exit(100);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
result = get_op_func(argv[2])(num1, num2);
printf("%i\n", result);
return (0);
}
