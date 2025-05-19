#include <stdlib.h>
#include <stddef.h>

/**
 * _calloc - allocate nmemb * size bytes of memory and initialize it
 * @nmemb: the number of elements
 * @size: the size of each element in byte
 *
 * Return: the address of the newly allocated memory or NULL on error
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;
	unsigned int i = 0;

	if ((nmemb * size) == 0)
		return (NULL);

	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);

	while (i < (nmemb * size))
	{
		((char *) arr)[i] = 0;
		i++;
	}

	return (arr);
}
