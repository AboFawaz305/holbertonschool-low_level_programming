#include "main.h"

/**
 * times_table - print the 9 times table starting from 0
 */
void times_table(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			int res, res0, res1;

			res = a*b;
			res0 = res % 10;
			res1 = res / 10;
			if (res1 != 0)
				_putchar(res1 + '0');
			else if (b != 0)
				_putchar(' ');
			_putchar(res0 + '0');
			if (b != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
				_putchar('\n');
		}
	}
}
