#ifndef du
#define du
#include "dog.h"
#include <stdio.h>
#endif

/**
 * print_dog - check the code
 *
 * @d: Param
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name == NULL)
			d->name = "(nil)";
		if (d->owner == NULL)
			d->owner = "(nil)";
		printf("Name: %s\nAge: %f\nOwner: %s\n", (d->name), (d->age), (d->owner));
	}
}
