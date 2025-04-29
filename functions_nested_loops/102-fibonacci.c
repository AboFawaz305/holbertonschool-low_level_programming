#include "main.h"
#include <stdio.h>

/**
 * main - print the first fibonacci numbers from 1 and 2
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int f1, f2, n, temp;

	n = 0;
	for (f1 = 1, f2 = 2; n < 50; n++)
	{
	temp = f2;

		printf("%ld, ", f1);
		f2 = f2 + f1;
		f1 = temp;
	}
	putchar('\n');

	return (0);
}
