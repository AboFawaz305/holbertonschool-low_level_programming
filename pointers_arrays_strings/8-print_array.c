#include <stdio.h>

/**
 * print_array - print n elements of the given array
 * @a: the address of the array
 * @n: the number of the element to print
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n - 1; i++)
	{
		printf("%d, ", a[i]);
	}
	if (n > 0)
		printf("%d", a[n - 1]);
	printf("\n");
}
