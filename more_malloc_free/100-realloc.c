#include <stdlib.h>
#include <stddef.h>

/**
 * _realloc - realloc ptr to a new size
 * @ptr: the address of the memory to realloc
 * @old_size: the current size of ptr
 * @new_size: the desired new size of ptr
 *
 * Description: NOTE ptr is freed after realloc
 * Return: the new address of ptr after realloc
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *nptr;

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (old_size == new_size)
		return (ptr);

	nptr = (malloc(new_size));
	if (nptr == NULL)
		return (NULL);

	if (new_size < old_size)
		old_size = new_size;
	i = 0;
	while (i < old_size)
	{
		((char *)nptr)[i] = ((char *)ptr)[i];
		i++;
	}

	free(ptr);
	return (nptr);
}
