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

	for (c = 0; c <= 9; c++)
	{
		int d;

		for (d = c; d <= 9; d++)
		{
			if (d == c)
				continue;
			if (c != 0 || d != 1)
			{
				putchar(',');
				putchar(' ');
			}
			putchar('0' + c);
			putchar('0' + d);
		}
	}
	putchar('\n');
	return (0);
}
