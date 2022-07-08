#include <stdarg.h>
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
va_list sumlist;
unsigned int i;
int sum = 0;
if (m == 0)
return (0);
va_start(sumlist, n);
for (i = 0; i < n; i++)
sum += va_arg(sumlist, int);
va_end(sumlist);
return (sum)
}
