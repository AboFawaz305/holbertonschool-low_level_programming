#include "main.h"

/**
 * print_chessboard - prints the chessboard inside a
 * @a: the chessboard represented as a 2d array. It is assumed to be of size
 * 8x8.
 */
void print_chessboard(char (*a)[8])
{
	int i = 0, j = 0;

	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
