#include "main.h"

/**
 * print_line - print a stright line on the terminal.
 * @n: line length and should
 *
 * Description: print a line using '_' characters the line length should be at
 * least 0. if n is less than or equal zero just prints an empty line.
 */
void print_line(int n)
{
	for (; n > 0; n--)
	{
		_putchar('_');
	}
		_putchar('\n');
}
