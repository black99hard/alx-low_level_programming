#include <stdio.h>
#include <stdlib.h>

/**
*main- the main functions
*@argc: the argu
*@argv: the second argu
*Return: 0
**/
int main(int argc, char *argv[])
{
	int x, y;

	if (argc >= 2)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		printf("%d\n", (x * y));
	return (0);
	}
	else
	{
	printf("Error\n");

	}

}
