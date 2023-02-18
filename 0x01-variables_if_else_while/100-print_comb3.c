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
int i, j;

for (i = 0; i <= 8; i++)
{
for (j = i + 1; j < 10; j++)
{
putchar('0' + i);
putchar('0' + j);
if (i < 8)
{
putchar(',');
putchar(' ');
}
}
}

putchar(10);
return (0);

return (0);
}
