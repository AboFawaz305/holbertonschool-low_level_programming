#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the result of adding the arguments
 * @argc: the size of argv
 * @argv: the arguments vector
 *
 * Return: Always (EXIT_SUCCESS)
 */
int main(int argc, char *argv[])
{
	long int res = 0;
	char *endptr;

	argc--;
	argv++;
	while (argc--)
	{
		res += strtol(*argv++, &endptr, 10);
		if (*endptr != '\0')
		{
			puts("Error");
			return (1);
		}
	}

	printf("%ld\n", res);
	return (EXIT_SUCCESS);
}
