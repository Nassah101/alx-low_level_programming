#include "function_pointers.h"
#include <stdio.h>
/**
* print_name - this function points a name using function pointers
* @name: string to be printed out
* @f: function pointer
* Return: Nothing
*/
void print_name(char *name, void (*f)(char *))
{
  if (name != NULL && f != NULL)
    f(name);
}
