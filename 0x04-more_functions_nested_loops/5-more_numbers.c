#include "main.h"

/**
*print_most_numbers- print 0123456789
* owned by Bwave ICT
*Return: void
*/
void print_most_numbers(void)
{
int t;
int n;

for (t = '0'; t <= '10'; t++)
{
for (n = 0; n < 14; n++)
{
if (n >= 10)
{
putchar('1');
}
_putchar(n % 10 + '0');
}
putchar(10);
}
}
