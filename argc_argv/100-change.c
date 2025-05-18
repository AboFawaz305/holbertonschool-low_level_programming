#include <stdlib.h>
#include <stdio.h>

void parse_args(int *cents, int argc, char **argv);
int min_change(int cents);

/**
 * parse_args - parse the arguments and returns the number of cents
 * @cents: the address where to store the number of cents
 * @argc: the arguments count
 * @argv: the arguments vector
 *
 * Return: changes the cents address of value to the parsed arguments and
 * change it to -1 if there was a parse error
 */
void parse_args(int *cents, int argc, char **argv)
{
	int i, isZero, parsed_cents;

	if (argc != 2)
	{
		puts("Error");
		*cents = -1;
		return;
	}

	/*
	 * Parse the zero case independently because atoi returns 0 on error
	 */
	i = 0;
	isZero = 1;
	while (argv[1][i])
	{
		if (argv[1][i] != '0')
		{
			isZero = 0;
			break;
		}
		i++;
	}
	if (isZero)
	{
		*cents = 0;
		return;
	}

	parsed_cents = atoi(argv[1]);
	if (parsed_cents < 0)
	{
		puts("0");
		*cents = -1;
		return;
	}
	if (parsed_cents == 0)
	{
		/* if a parsing error happens */
		puts("Error");
		*cents = -1;
		return;
	}

	*cents = parsed_cents;
}

/**
 * min_change - returns the minimum number of coins to change
 * @cents: the amount of cents to change
 *
 * Return: the minumum number of coins to change for the given coins
 */
int min_change(int cents)
{
	int coin_values[] = {25, 10, 5, 2, 1};
	int i, change = 0;

	i = 0;
	while (cents != 0)
	{
		change += cents / coin_values[i];
		cents %= coin_values[i];
		i++;
	}

	return (change);
}

/**
 * main - prints the minimum coins to change
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: 0 on success and 1 on a parse error
 */
int main(int argc, char **argv)
{
	int cents;

	parse_args(&cents, argc, argv);
	if (cents == -1)
		return (1);

	printf("%d\n", min_change(cents));
	return (EXIT_SUCCESS);
}
