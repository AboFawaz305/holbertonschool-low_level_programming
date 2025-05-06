#include "main.h"

/**
 * more_numbers - print the numbers from 0 to 14 10 times
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			int n1, n0;
			n1 = j / 10;
			n0 = j % 10;
			if (n1 != 0)
			{
				_putchar('0' + n1);
			}
			_putchar('0' + n0);
		}
	_putchar('\n');
	}
}
