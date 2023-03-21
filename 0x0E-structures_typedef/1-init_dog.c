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

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = strdup(name);
	d->age = age;
	d->owner = stdup(owner);
}
