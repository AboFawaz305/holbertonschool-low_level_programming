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

		for (d = c + 1; d <= 9; d++)
		{
			int e;

			for (e = d + 1; e <= 9; e++)
			{
				if (d == c && c == e)
					continue;
				if (c != 0 || d != 1 || e != 2)
				{
					putchar(',');
					putchar(' ');
				}
				putchar('0' + c);
				putchar('0' + d);
				putchar('0' + e);
			}
		}
	}
	putchar('\n');
	return (0);
}
