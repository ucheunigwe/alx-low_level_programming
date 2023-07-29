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
	size_t name_len = 0, owner_len = 0, i = 0;

	d = malloc(sizeof(dog_t *));
	if (d != NULL)
	{
		name_len = strlen(name);
		owner_len = strlen(owner);
		d->name = malloc(sizeof(char) * (strlen(name) + 3));
		d->owner = malloc(sizeof(char) * (strlen(owner) + 3));
		if (d->name == NULL || d->owner == NULL)
		{
			free(d->name);
			free(d->owner);
			free(d);
			return (NULL);
		}
		for (i = 0; i < name_len; i++)
			d->name[i] = name[i];
		d->name[i] = '\0';
		for (i = 0; i < owner_len; i++)
			d->owner[i] = owner[i];
		d->owner[i] = '\0';
		d->age = age;
		return (d);
	}
	else
	{
		free(d);
		return (NULL);
	}

}
