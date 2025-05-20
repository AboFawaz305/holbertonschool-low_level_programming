#include "dog.h"
#include <stddef.h>

/**
 * init_dog - initialize a dog structure
 * @d: the address of the dog structure to initialize
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner name of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
