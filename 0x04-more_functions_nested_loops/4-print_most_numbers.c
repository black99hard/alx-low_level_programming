#include "main.h"

/**
*print_numbers - print 0123456789
* owned by Bwave ICT
*Return: void
*/

void print_most_numbers(void)
{
int i;
for (i = '0'; i <= '9'; i++)
{
if (i != '2' && i != '4')
{
putchar(i);
}
}
putchar(10);
}
