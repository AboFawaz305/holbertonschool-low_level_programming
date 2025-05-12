#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals in a
 * @a: the address of a square matrix to caculate the sum of its two diagonals
 * @size: the size of a
 */
void print_diagsums(int *a, int size)
{
	int r = 0, c = size - 1, dia1 = 0, dia2 = 0;

	while (r < size)
	{
		dia1 += a[r * size + r];
		r++;
	}

	r = 0;
	while (r < size)
	{
		dia2 += a[r * size + c];
		r++;
		c--;
	}

	printf("%d, %d\n", dia1, dia2);
}
