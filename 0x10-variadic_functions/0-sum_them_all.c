#include "variadic_functions.h"
/**
* sum_them_all - variadic function that takes in a variable number of
* arguments and returns the sum of them all
* @n: number of arguments being passed into the function
* @...: variable number of arguments
* Return: the sum of all arguments
*/
int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
va_list list;
double sum = 0;
if (n == 0)
{
return (0);
}
if (n == 0)
{
return (0);
}
va_start(list, n)
for (i = 0; i < n; i++)
{
sum += va_arg(list, int);
}
va_end(list);
return (sum);
}
