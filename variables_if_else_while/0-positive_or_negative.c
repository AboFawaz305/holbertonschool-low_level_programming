#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - Entry point
 *
 * Description: generate a random number and then print it as such
 * {number} is {positive | negative}
 * Return: Always (0) Success
 */
int main(void)
{
	int n;
	char *sign  = "negative";

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		sign = "positive";
	}
	else if (n == 0)
	{
		sign = "zero";
	}
	printf("%d is %s\n", n, sign);
	return (0);
}
