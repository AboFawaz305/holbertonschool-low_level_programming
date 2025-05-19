#include <stdlib.h>
#include <stddef.h>

/**
 * create_array - create an array of chars
 * @size: the size of the array
 * @c: the char to initialize the array with
 *
 * Return: a pointer to the array or NULL on error
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(char) * size);

	if (arr != NULL)
		while (i < size)
			arr[i++] = c;

	return (arr);
}
