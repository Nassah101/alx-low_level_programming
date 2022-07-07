#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
* print_numbers - variadic function that print whatever argument
* is being passed in
* @separator: what should separate functions
* @n: number of arguments being passed in
* Return: nothing
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
int num;
va_list int_input;
va_start(int_input, n);
for (i = 0; i < n; i++)
{
num = va_arg(int_input, int);
printf("%d", num);
if ((i != n - 1) && separator != NULL)
printf("%s", separator);
}
va_end(int_input);
printf("\n");
}
