#include <stdlib.h>
#include <stddef.h>

/**
 * malloc_checked - allocate the memory using malloc
 * @b: the size of the memory to allocate
 *
 * Description: the memory is allocated with malloc and the program will stop
 * if malloc fails with exit status 98
 * Return: the address to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
