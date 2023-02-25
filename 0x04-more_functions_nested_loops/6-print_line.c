#include "main.h"

/**
*print_line - print 0123456789
*@n: to determine the line
*Return: void
*/
void print_line(int n)
{
int i;
if (!(n <= 0))
{
for (i = 0; i < n; i++)
{
putchar('_');
}
putchar(10);
}
putchar(10);
}
