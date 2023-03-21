#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
*init_dog - a function that ini the dog struct type
*@d: is an struct type of dog
*@name: type char that will held the name of the doge
*@age: a float type that will held the age of the doge
*@owner: a char type that will held the owner's name
*/

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");
		printf("Age: %.6f\n", d->age);
		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)\n");
	}
}
