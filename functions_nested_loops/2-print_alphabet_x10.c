#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet from a to z followed by a newline 10
 * times.
 */
void print_alphabet_x10(void)
{
	char i;

	for (i = 0; i < 10; i++)
	{
		char c;

		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
