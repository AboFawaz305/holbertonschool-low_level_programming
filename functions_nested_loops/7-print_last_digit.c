#include "main.h"

/**
 * print_last_digit - return and print last digit of n
 * @n: the number
 *
 * Return: the last digit of n
 */
int print_last_digit(int n)
{
	int an, ld;

	an = n;
	if (n < 0)
		an = -n;
	ld = an % 10;
	_putchar(ld + '0');

	return (ld);
}
