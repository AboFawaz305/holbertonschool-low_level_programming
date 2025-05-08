#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: the address of the string
 */
void puts_half(char *str)
{
	int i = 0, size = 0;

	while (str[i++])
		size++;

	for (i = (size + 1) / 2; i < size; i += 1)
		_putchar(str[i]);
	_putchar('\n');
}
