#include "main.h"

/**
 * print_number - print an integer
 * @n: the integer to print
 */
void print_number(int n)
{
	int b = 1;

	if (n < 0)
		_putchar('-');

	while ((n / 10 / b) != 0)
		b *= 10;

	do {
		int d = ((n / b) % 10);

		if (d < 0)
			d = -d;
		_putchar('0' + d);
		b /= 10;
	} while (b > 0);
}
