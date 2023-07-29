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
	if (d != NULL)
	{
		d->name = malloc(sizeof(char) * (strlen(name) + 1));
		d->owner = malloc(sizeof(char) * (strlen(owner) + 1));
		if (d->name == NULL || d->owner == NULL)
		{
			free(d->name);
			free(d->owner);
			free(d);
			return (NULL);
		}
		strcpy(d->name, name);
		strcpy(d->owner, owner);
		d->age = age;
		return (d);
	}
	else
	{
		free(d);
		return (NULL);
	}
}
