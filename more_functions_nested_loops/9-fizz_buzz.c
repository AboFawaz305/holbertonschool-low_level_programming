#include <stdlib.h>
#include <stdio.h>

/**
 * main - Fizz-Buzz test
 */
int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (i % 3 == 0)
			printf("Fizz");
		if (i % 5 == 0)
			printf("Buzz");
		if (i % 3 != 0 && i % 5 != 0)
			printf("%d", i);
		printf(" ");
	}
	return EXIT_SUCCESS;
}
