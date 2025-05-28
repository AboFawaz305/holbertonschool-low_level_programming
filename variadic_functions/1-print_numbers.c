#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - print the given numbers with a separator
 * @separator: the separator between numbers
 * @n: the number of numbers
 *
 * Description: the string is followed by a newline
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;


	if (n == 0)
	{
		printf("\n");
		return;
	}

	if (separator == NULL)
		separator = "";

	va_start(ap, n);
	while (i < n - 1)
	{
		printf("%d%s", va_arg(ap, int), separator);
		i++;
	}
	printf("%d\n", va_arg(ap, int));
	va_end(ap);
}
