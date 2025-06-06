#include "main.h"

/**
 * _print_rev_recursion - prints the string s in reverse
 * @s: the string to be printed
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
