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
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s \n", argv[i]);
	}
return (0);
}
