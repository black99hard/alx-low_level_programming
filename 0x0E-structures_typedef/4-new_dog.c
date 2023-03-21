#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t *newdog = malloc(sizeof(*newdog));

	if (newdog == NULL)
		return (NULL);
	newdog->name = name;
	newdog->age = age;
	newdog->owner = owner;

return (newdog);
}
