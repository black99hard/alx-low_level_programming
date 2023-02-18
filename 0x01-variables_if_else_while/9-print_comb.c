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

for (ch = '0'; ch <= '9' ; ch++)
{
if(ch == '9')
{
putchar(ch);

break;
}
putchar(ch);
putchar(44);
putchar(32);

}

putchar(10);

return (0);
}
