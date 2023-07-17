#ifndef foo
#define foo
#include <stdlib.h>
#endif


/**
 * init_dog - check the code
 *
 * @d:
 * @name:
 * @owner:
 * Return: Always 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{	
	d->name = name;
	d->age = age;
	d->owner = owner;
}
