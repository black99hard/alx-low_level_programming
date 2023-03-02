#include "main.h"
/**
* *_strncpy - copy th des to src
*@dest: char
*@src: char
*@n: int
* Return: return new modern of string
**/
char *_strncpy(char *dest, char *src, int n)
{
int i;

	for (i = 0; i < n && *(src + i); i++)
	{
		*(dest + i) = *(src + i);
	}
	for (; i < n; i++)
	{
	*(dest + i) = '\0';
	}
	return (dest);

}
