#include <stdarg.h>

/**
 * sum_them_all - return the sum for all the given arguments
 * @n: the number of numbers to sum
 * @num*: a number to sum
 *
 * Return: the sum of all the arguments without n
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int acc;
	unsigned int i;

	if (n == 0)
		return (0);

	acc = 0;
	i = 0;
	va_start(ap, n);
	while (i < n)
	{
		acc += va_arg(ap, int);
		i++;
	}
	va_end(ap);
	return (acc);
}
