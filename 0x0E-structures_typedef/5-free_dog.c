#ifndef du
#define du
#include "dog.h"
#include <stdlib.h>
#endif

/**
 * new_dog - check the code
 *
 * @d: Param
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d);
	}
}
