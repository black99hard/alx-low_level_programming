#include "main.h"

/**
* _memset - write a function that check for a digit (0 through 9)
* @s: char to check
* @b: char to check
* @n: char to check
* Return:  0 or 1
**/
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		s[i] = b;

	}
}
