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

		for (d = 0; d <= 9; d++)
		{
			int e;

			for (e = c; e <= 9; e++)
			{
				int f;

				for (f = d+1; f <= 9; f++)
				{
					if (c != 0 || d != 0 ||
							e != 0 || f != 1)
					{
						putchar(',');
						putchar(' ');
					}
					putchar('0' + c);
					putchar('0' + d);
					putchar(' ');
					putchar('0' + e);
					putchar('0' + f);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
