#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory struct
 * @d: struct dog to free
 *
 * Retuen: void.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
