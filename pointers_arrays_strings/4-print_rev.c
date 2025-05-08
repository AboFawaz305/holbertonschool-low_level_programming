#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: the address of the string
 */
void print_rev(char *s)
{
	int size = 0, i = 0;

	while (s[i++])
		size++;

	while (size-- > 0)
	{
		_putchar(s[size]);
	}
	_putchar('\n');
}
