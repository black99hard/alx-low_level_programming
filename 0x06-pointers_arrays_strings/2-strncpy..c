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
	char *s = dest;

	for (int i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

return (s);
}
