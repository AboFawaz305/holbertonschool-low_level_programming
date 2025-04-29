#include "main.h"
#include <stdio.h>

/**
 * main - print the first 98 fibonacci numbers starting from 1 and 2
 *
 * Return: Always 0.
 */
int main(void)
{
	long double f1, f2, n, temp;

	n = 0;
	for (f1 = 1, f2 = 2; n < 97; n++)
	{
	temp = f2;

		printf("%.0Lf, ", f1);
		f2 = f2 + f1;
		f1 = temp;
	}
	printf("%.0Lf", f1);
	putchar('\n');

	return (0);
}
