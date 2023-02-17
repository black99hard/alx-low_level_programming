#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* find the last digit of the given random numbers */
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
    lastDigit = n % 10;
	
	if(lastDigit > 5) 
		printf("Last digit of %d is %d and is greater than 5 ",n,lastDigit);
	if(lastDigit == 0) 
		printf("Last digit of %d is %d and is 0 ",n,lastDigit);
	if(lastDigit < 6 && lastDigit != 0 )
		printf("Last digit of %d is %d and is less than 6 and not 0 ",n,lastDigit);
	
	/* your code goes there */
	
	
	return (0);
}
