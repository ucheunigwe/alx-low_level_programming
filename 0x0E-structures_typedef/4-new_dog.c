#ifndef du
#define du
#include "dog.h"
#include <stdlib.h>
#endif

/**
 * new_dog - check the code
 *
 * @name: Param
 * @age: Param
 * @owner: Param
 * Return: pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t *));
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
	return (d);
}
