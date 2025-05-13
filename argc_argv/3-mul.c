#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * main - prints the result of multiplying argv[1] and argv[2]
 * @argc: the size of argv
 * @argv: the arguments vector
 *
 * Return: Always (EXIT_SUCCESS)
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		puts("Error");
		return (1);
	}

	{
		long int n1 = strtol(argv[1], NULL, 10);
		long int n2 = strtol(argv[2], NULL, 10);
		long int res = n1 * n2;

		printf("%ld\n", res);
	}
	return (EXIT_SUCCESS);
}
