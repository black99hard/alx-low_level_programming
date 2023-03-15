#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * _strdup - prints its name, followed by a new line.
 * @str: argument count
 * Return: 0
 */
char *_strdup(char *str)
{
	char *s;
	unsigned int len = strlen(str);
	int i = 0;

	if (str == NULL)
		return (NULL);

	s = malloc(sizeof(*str) * len);
	if (s == NULL)
		return (NULL);

	while (*str)
	{
		s[i++] = *str++;
	}
	s[i] = '\0';
	return (s);
}
