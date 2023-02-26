#include "main.h"

/**
*print_diagonal- print 0123456789
*@n: to determine the line
*Return: void
*/
void print_diagonal(int n)
{
int i;
int t;
if (!(n <= 0))
{
for (t = 0; t < n; t++)
{
for (i = 0; i < t; i++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
else
{
_putchar(10);
}
}
