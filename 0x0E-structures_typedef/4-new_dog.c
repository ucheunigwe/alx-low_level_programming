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
		d->name = malloc(sizeof(char) * (strlen(name) + 1));
		if (d->name == NULL)
		{
			free(d);
			return (NULL);
		}
		d->owner = malloc(sizeof(char) * (strlen(name) + 1));
		if (d->owner == NULL)
		{
			free(d->name);
			free(d);
			return (NULL);
		}


		strcpy(d->name, name);
		strcpy(d->owner, owner);
		d->age = age;
	}
	return (d);
}
