#include "main.h"
/*more header*/


/**
*print_square- print 0123456789
*@size: to determine the line
*Return: void
*/
void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < (size); j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

}
