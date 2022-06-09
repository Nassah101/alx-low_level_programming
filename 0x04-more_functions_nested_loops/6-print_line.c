#include "main.h"
/**
* print_line - Draws a straight line according to parameter
* @n: The number of lines to draw
* Return: nothing
*/
void print_line(int n)
{
int i;
while (i < n)
{
if (n > 0)
{
+putchar(95);
i += 1;
}
else
_putchar('\n');
}
_putchar('\n');
}
