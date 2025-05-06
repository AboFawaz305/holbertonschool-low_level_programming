#include "main.h"

/**
 * print_diagonal - print a diagonal of length n
 * @n: diagonal length and should
 *
 * Description: print a diagonal using '\' characters the diagonal length should
 * be at least 0. if n is less than or equal zero just prints an empty line.
 */
void print_diagonal(int n)
{
	int i,j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = n; i > 0; i--)
	{
		for (j = 0; j < (n - i); j++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
