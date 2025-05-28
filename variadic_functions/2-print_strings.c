#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - print the given strings with a separator
 * @separator: the separator between strings
 * @n: the number of strings
 *
 * Description: the output is followed by a newline
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;
	char *s;


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
		s = va_arg(ap, char *);
		if (s == NULL)
			s = "(nil)";

		printf("%s%s", s, separator);
		i++;
	}
	s = va_arg(ap, char *);
	if (s == NULL)
		s = "(nil)";
	printf("%s\n", s);
	va_end(ap);
}
