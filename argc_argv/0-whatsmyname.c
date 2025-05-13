#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the program name and exits
 * @argc: the size of argv
 * @argv: the arguments vector
 *
 * Return: Always (EXIT_SUCCESS)
 */
int main(int __attribute__((unused)) argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (EXIT_SUCCESS);
}
