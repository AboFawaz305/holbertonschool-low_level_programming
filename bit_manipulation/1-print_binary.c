#include <unistd.h>
#include "main.h"

/**
 * _print_binary - print n in binary
 * @n: a number to print in binary
 *
 * Description: a helper for print_binary does not handle n == 0
 */
void _print_binary(unsigned long int n)
{
	char c = (n & 0x01) + '0';

	if (n == 0)
		return;
	_print_binary(n >> 1);
	write(1, &c, 1);
}

/**
 * print_binary - print n in binary
 * @n: a number to print in binary
 */
void print_binary(unsigned long int n)
{
	char c = (n & 0x01) + '0';

	if (n == 0)
	{
		write(1, &c, 1);
		return;
	}
	_print_binary(n);
}
