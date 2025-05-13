#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the program name and exits
 * @argc: the size of argv
 * @argv: the arguments vector
 *
 * Return: Always (EXIT_SUCCESS)
 */
int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	return (EXIT_SUCCESS);
}
