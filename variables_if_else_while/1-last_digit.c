#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - Entry point
 *
 * Description: generate a random number and print the last digit.
 * Return: Always (0) Success
 */
int main(void)
{
	int n, ld;
	char *msg;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	ld = n % 10;
	if (ld > 5)
	{
		msg = "greater than 5";
	}
	else if (ld == 0)
	{
		msg = "0";
	}
	else
	{
		msg = "less than 6 and not 0";
	}
	printf("Last digit of %d is %d and is %s\n", n, ld, msg);
	return (0);
}
