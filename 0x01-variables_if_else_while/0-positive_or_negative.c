#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*here is the header of loader*/

/**
*main - to get random number out of the use of srandom function
*@n this take a random value genarted from srandom functions
*Return: success if went well
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 0)
		printf("is %d negtaive \n",n);
	if (n > 0)
		printf("is %d postive \n",n);
	if (n == 0)
		printf("is %d zero \n");
	return (0);

}
