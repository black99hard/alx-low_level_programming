#include "main.h"
#include <stdlib.h>
/**
 * create_array - prints its name, followed by a new line.
 * @size: argument count
 * @c: arguments
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (!size)
		return (NULL);

	a = malloc(sizeof(char) * size);
	if (a == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	return (a);
}
