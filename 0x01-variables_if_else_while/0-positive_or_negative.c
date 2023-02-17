#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
*this is a main function that tak all the code I may type 
*/
int main(void){
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n < 0)
		printf("is negtaive");
	if(n > 0)
		printf("is postive");
	if(n == 0)
		printf("is zero");
	return(0);

}
