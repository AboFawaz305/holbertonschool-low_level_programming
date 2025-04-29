#include "main.h"

/**
 * print_times_table - print the times table from 0 to n
 * @n: the end times table
 *
 * Description: if n is greeter than 15 or less than 0 the function wont print
 * anything
 */
void print_times_table(int n)
{
	int a, b;

	if (n > 15 || n < 0)
		return;

	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			int res, res0, res1, res2;

			res = a * b;
			res0 = res % 10;
			res1 = (res / 10) % 10;
			res2 = res / 100;
			if (res2 != 0)
				_putchar(res2 + '0');
			else if (b != 0)
				_putchar(' ');
			if (res1 != 0 || res2 != 0)
				_putchar(res1 + '0');
			else if (b != 0)
				_putchar(' ');
			_putchar(res0 + '0');
			if (b != n)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
				_putchar('\n');
		}
	}
}

