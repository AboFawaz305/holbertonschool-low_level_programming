#include <stdlib.h>
#include <stddef.h>
#include "dog.h"

/**
 * _strcpy - Returns a newly created copy of s
 * @s: the src string
 *
 * Return: the address of the newly created string or NULL on failure or if s
 * == NULL
 */
char *_strcpy(char *s)
{
	char *res;
	int size = 0;

	if (s == NULL)
		return (NULL);

	while (s[size])
		size++;
	size++;

	res = malloc(sizeof(*res) * size);
	if (res == NULL)
		return (NULL);

	size = 0;
	while (s[size])
	{
		res[size] = s[size];
		size++;
	}
	res[size] = '\0';

	return (res);
}

/**
 * new_dog - create a new dog and return its address
 * @name: the name of the dog
 * @age: the of the dog
 * @owner: the owner name of the dog
 *
 * Return: the address of the newly created dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *res = malloc(sizeof(*res));

	if (res == NULL)
		return (NULL);

	if (name == NULL)
		res->name = NULL;
	else
	{
		res->name = _strcpy(name);
		if (res->name == NULL)
		{
			free(res);
			return (NULL);
		}
	}

	res->age = age;

	if (owner == NULL)
		res->owner = NULL;
	else
	{
		res->owner = _strcpy(owner);
		if (res->owner == NULL)
		{
			if (res->name != NULL)
				free(res->name);
			free(res);
			return (NULL);
		}
	}

	return (res);
}
