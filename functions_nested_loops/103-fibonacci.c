#include "main.h"
#include <stdio.h>

/**
 * main - print the first fibonacci numbers from 1 and 2
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int f1, f2, n, temp, acc;

	acc = 0;
	/* while the current term is less than 4 million */
	for (f1 = 1, f2 = 2, n = 0; f1 <= 4000000; n++)
	{
		if (n % 3 == 1)
			acc += f1;
		temp = f2;
		f2 = f2 + f1;
		f1 = temp;
	}
	printf("%ld", acc);
	putchar('\n');

	return (0);
}
