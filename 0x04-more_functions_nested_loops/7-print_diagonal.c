#include "main.h"

/**
*print_diagonal- print 0123456789
*@n: to determine the line
*Return: void
*/
void print_diagonal(int n)
{
int i;
if (!(n <= 0))
{
for (i = 0; i < n; i++)
{
_putchar(' ');
}
}
else
{
_putchar(10);
}
}
