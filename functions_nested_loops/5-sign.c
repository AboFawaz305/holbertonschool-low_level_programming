#include "main.h"

/**
 * print_sign - checks the sign of a number and prints the sign
 * @n: the number to be checked
 *
 * Description: checks the sign and print it to the standard output
 * Return: 1 if n is above 0 and returns 0 if n == 0 and -1 otherwise
 */
int print_sign(int n)
{
	char sign, ret;

	if (n > 0)
	{
		sign = '+';
		ret = 1;
	}
	else if (n == 0)
	{
		sign = '0';
		ret = 0;
	}
	else
	{
		sign = '-';
		ret = -1;
	}

	_putchar(sign);
	return (ret);
}
