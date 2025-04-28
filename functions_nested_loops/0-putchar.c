#include "./main.h"

/**
 * main - Entry point.
 *
 * Description: print a single character followed by a newline.
 * Return: Always (0) Success
 */
int main(void)
{
	int c;
	/* Strings are NULL terminitated in C */ 
	char msg[] = "_putchar\0";

	for(c = 0; msg[c] != '\0'; c++)
	{
		_putchar(msg[c]);
	}
	_putchar('\n');
	return (0);
}
