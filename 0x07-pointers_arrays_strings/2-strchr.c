#include "main.h"

/**
* _strchr - write a function that
* @s: char to check
* @c: char to check
* Return:  0 or 1
**/
char *_strchr(char *s, char c)
{
	while (*p)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}

	if (c == '\0')
		return (s);

return (NULL);
}
