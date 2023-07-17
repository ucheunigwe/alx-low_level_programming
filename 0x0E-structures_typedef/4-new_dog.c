#ifndef du
#define du
#include "dog.h"
#include <stdlib.h>
#include <string.h>
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
		char *name1 = malloc(sizeof(char) * strlen(name) + 1);
		char *owner1 = malloc(sizeof(char) * strlen(name) + 1);


		name1 = strcpy(name1, name);
		owner1 = strcpy(owner1, owner);
		d->name = name1;
		d->age = age;
		d->owner = owner1;
	}
	return (d);
}
