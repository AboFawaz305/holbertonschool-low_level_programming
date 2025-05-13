#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the number of arguments passed to it and exit
 * @argc: the size of argv
 * @argv: the arguments vector
 *
 * Return: Always (EXIT_SUCCESS)
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);

	return (EXIT_SUCCESS);
}
