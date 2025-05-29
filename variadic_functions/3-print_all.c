#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_char - print a char from the argument list
 * @ap: the argument list
 * @sep: a sep to print at the end
 */
void print_char(va_list ap, char *sep)
{
	char c = (char) va_arg(ap, int);

	printf("%c%s", c, sep);
}

/**
 * print_int - print an int from the argument list
 * @ap: the argument list
 * @sep: a sep to print at the end
 */
void print_int(va_list ap, char *sep)
{
	int i = va_arg(ap, int);

	printf("%d%s", i, sep);
}

/**
 * print_float - print a float from the argument list
 * @ap: the argument list
 * @sep: a sep to print at the end
 */
void print_float(va_list ap, char *sep)
{
	float f = (float) va_arg(ap, double);

	printf("%f%s", f, sep);
}

/**
 * print_string - print a string from the argument list
 * @ap: the argument list
 * @sep: a sep to print at the end
 */
void print_string(va_list ap, char *sep)
{
	char *s = va_arg(ap, char *);

	if (s == NULL)
		s = "(nil)";
	printf("%s%s", s, sep);
}

/**
 * print_all - print all the arguments based on the format string
 * @format: a string that show the type of each argument respetively
 * @arg*: a value to print
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	const char *fmt = format;
	formater_t cases[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};
	int i = 0, is_last = 0;

	va_start(ap, format);
	while (fmt != NULL && *fmt)
	{
		i = 0;
		while (cases[i].fmt)
		{
			if (*fmt == cases[i].fmt)
			{
				is_last = *(fmt + 1) == '\0';
				cases[i].print_function(ap,
						(", ") + (is_last * 2));
			}
			i++;
		}
		fmt++;
	}
	printf("\n");
	va_end(ap);
}

