#ifndef du
#define du
#include "dog.h"
#endif

/**
 * init_dog - check the code
 *
 * @d: Param
 * @name: Param
 * @owner: Param
 * @age: Param
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
