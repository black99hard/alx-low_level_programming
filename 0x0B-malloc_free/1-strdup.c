#include "main.h"
#include <stdlib.h>
/**
 * _strdup - prints its name, followed by a new line.
 * @str: argument count
 * Return: 0
 */
char *_strdup(char *str)
{
	char *s;
	int len = strlen(str);
	int i = 0;

	if (!(malloc(sizeof(*str) * len)) || == NULL)
		return (NULL);

	while (*str)
	{
		s[i++] = *str;
		s++;
		str++;
	}
	return (S);
}
