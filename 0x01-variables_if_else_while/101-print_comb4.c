#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * *main - find the last digit of the given random numbers
 * @ch to insert the characters fuond during the  looping
 * Return: return success if went well
 */
int main(void)
{
int a, b, c;

for (a = 0; a <= 7; a++)
{
for (b = a + 1; b <= 8; b++)
{
for (c = b + 1; c <= 9; c++)
{
putchar(a + '0');
putchar(b + '0');
putchar(c + '0');
if (a != 7 || b != 8 || c != 9)
{
putchar(',');
putchar(' ');
}
}
}
}

putchar(10);
return (0);

return (0);
}
