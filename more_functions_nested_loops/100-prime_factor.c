#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * main - find the largest prime factor of 612852475143
 *
 * Return: Always (0) Success
 */
int main(void)
{
	unsigned long int i, n = 612852475143;
	unsigned long int largest_possible_factor = sqrt(n);

	for (i = 2; i < largest_possible_factor && n > 1; i++)
	{
		while (n % i == 0)
			n /= i;
	}
	printf("%ld\n", n);

	return (1);
}
