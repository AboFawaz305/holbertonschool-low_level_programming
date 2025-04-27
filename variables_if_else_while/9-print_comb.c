#include <stdlib.h>
#include <stdio.h>


/**
 * main - Entry point
 *
 * Description: prints the alphabet in lowercase and then print a newline.
 * Return: Always (0) Success
 */
int main(void)
{
	int c;

	putchar('0');
	for (c = 1; c <= 9; c++)
	{
		putchar(',');
		putchar(' ');
		putchar('0' + c);
	}
	putchar('\n');
	return (0);
}
