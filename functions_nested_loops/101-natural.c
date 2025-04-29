#include "main.h"
#include <stdio.h>

/**
 * main - compute the sum of all multiples of 3 and 5 below 1024
 *
 * Return: Always 0.
 */
int main(void)
{
	int acc, i;

	acc = 0;
	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			acc += i;
	}
	printf("%d\n", acc);

	return (0);
}
