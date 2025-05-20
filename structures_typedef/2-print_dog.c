#include <stddef.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints the contents of the dog structure on the screen
 * @d: the address of the dog structure
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");

		printf("Age: %f\n", d->age);

		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)\n");
	}
}
