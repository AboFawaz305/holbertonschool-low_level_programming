#include <stdlib.h>
#include <stddef.h>
#include "dog.h"

/**
 * free_dog - frees a dog_t from memory that has been allocated with new_dog
 * @d: the address of a dog to free
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	if (d->name != NULL)
		free(d->name);

	if (d->owner != NULL)
		free(d->owner);
	free(d);
}
