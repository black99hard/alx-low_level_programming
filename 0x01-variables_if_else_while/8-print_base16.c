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
int ch;
int hex;
for (ch = '0'; ch <= '9'; ch++)
{
putchar(ch);
if (ch == '9')
{
for (hex = 'a'; hex <= 'f'; hex++)
{
putchar(hex);
}
}

}

putchar(10);

return (0);
}
