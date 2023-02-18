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

for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
putchar(10);

for (ch = 'A'; ch <= 'Z'; ch++)
{
putchar(ch);
}


return (0);
}
