#include "main.h"

/**
 * print_last_digit - return and print last digit of n
 * @n: the number
 *
 * Return: the last digit of n
 */
int print_last_digit(int n)
{
	int ld;

	ld = n % 10;
	if (ld < 0)
		ld = -ld;
	_putchar(ld + '0');

	return (ld);
}
