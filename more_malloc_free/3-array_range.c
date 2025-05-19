#include <stdlib.h>
#include <stddef.h>

/**
 * array_range - allocate an array with the values from min to max
 * @min: the minimum value
 * @max: the maximum value
 *
 * Return: of the newly created array
 */
int *array_range(int min, int max)
{
	int size = max - min + 1, i = 0;
	int *arr;

	if (min > max)
		return (NULL);

	arr = malloc(size * sizeof(*arr));
	if (arr == NULL)
		return (NULL);


	i = 0;
	while (min <= max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}
