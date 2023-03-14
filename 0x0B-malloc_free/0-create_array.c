#include "main.h"

/**
 * create_array - prints its name, followed by a new line.
 * @size: argument count
 * @c: arguments
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
	if (!size)
		return (NULL);
	char *a;
	int i = 0;

	a = malloc(sizeof(char) * size);
	if (a == NULL)
		return (NULL);

	for (; i < strlen(a); i++)
	{
		a[i] = c;
	}
	return (a);
}
