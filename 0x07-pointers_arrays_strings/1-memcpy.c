#include "main.h"

/**
* _memcpy - write a function that check for a digit (0 through 9)
* @dest: char to check
* @src: char to check
* @n: char to check
* Return:  0 or 1
**/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	 unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

return (dest);
}
