#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
*main - to find last number
*@n to to insert into an int a value of random numbers
*@lastDigit will take last digit of n random number
*Return: the success
*/
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;

	if (lastDigit > 5)
	printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
	if (lastDigit == 0)
	printf("Last digit of %d is %d and is 0\n", n, lastDigit);
	if (lastDigit < 6 && lastDigit != 0)
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDigit);
	/* your code goes there */
	return (0);
}
