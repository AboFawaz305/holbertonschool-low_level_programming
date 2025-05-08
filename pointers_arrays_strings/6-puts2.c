#include "main.h"

/**
 * puts2 - print every other character of a string
 * @str: the address of the string
 */
void puts2(char *str)
{
	int i = 0, size = 0;

	while (str[i++])
		size++;

	for (i = 0; i < size; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
