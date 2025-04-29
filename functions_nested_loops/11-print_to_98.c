#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print natural numbers from n to 98
 * @n: the number to start from
 */
void print_to_98(int n)
{
	for (; n < 98; n++)
		printf("%d, ", n);
	for (; n > 98; n--)
		printf("%d, ", n);
	puts("98");
}
