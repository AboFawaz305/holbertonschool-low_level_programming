#include <stddef.h>

/**
 * int_index - search for an integer in array
 * @array: the array to search in
 * @size: the number of elements in array
 * @cmp: a function to compare between the elements of array
 *
 * Return: the index for the element for which cmp does not return 0 or -1 if
 * no such an element was found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	i = 0;
	while (i < size)
	{
		if (cmp(array[i]))
			return (i);
		i++;
	}

	return (-1);
}
