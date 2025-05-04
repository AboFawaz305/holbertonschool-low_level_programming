#include "main.h"
#include <stdio.h>
#include <inttypes.h>

void print_fib(long int x, long int y)
{
	if (x != 0)
		printf("%ld%-ld, ", x, y);
	else
		printf("%ld, ", y);
}

/**
 * main - print the first 98 fibonacci numbers starting from 1 and 2
 *
 * Return: Always 0.
 */
int main(void)
{
	long int fibc_0, fibc_1, fibn_0, fibn_1, tmp0, tmp1;
	int n;

	fibc_0 = 0;
	fibc_1 = 1;
	fibn_0 = 0;
	fibn_1 = 2;
	tmp0 = 0;
	tmp1 = 0;
	n = 0;
	for (; n < 97; n++)
	{
		print_fib(fibc_0, fibc_1);
		tmp0 = fibn_0;
		tmp1 = fibn_1;
		fibn_1 += fibc_1;
		if (fibn_1 < 0)
		{
			fibn_1 = fibn_1 & 0x7FFFFFFFFFFFFFFF;
			fibn_0 += 1;
		}
		fibn_0 += fibc_0;
		fibc_0 = tmp0;
		fibc_1 = tmp1;
	}
	printf("%ld%-ld", fibc_0, fibc_1);
	putchar('\n');

	return (0);
}

