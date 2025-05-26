#include <stddef.h>

/**
 * array_iterator - execute action on every element of array
 * @array: the address of an array to iterate
 * @size: the number of elements of array
 * @action: a functio to execute on every element of array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
