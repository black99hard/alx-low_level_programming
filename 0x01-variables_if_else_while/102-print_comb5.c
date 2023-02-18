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
for (i = 0; i <= 99; i++)
{
for (j = i + 1; j <= 99; j++)
{
putchar((i / 10) + '0'); /* print first digit of i */
putchar((i % 10) + '0'); /* print second digit of i */
putchar(' ');
putchar((j / 10) + '0'); /* print first digit of j */
putchar((j % 10) + '0'); /*  print second digit of j */
if (i != 98 || j != 99) /* check if it's the last combination */
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}

putchar(10);
return (0);

return (0);
}
