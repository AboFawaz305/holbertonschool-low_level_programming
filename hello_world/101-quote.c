#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints "and that piece of art is useful\" - Dora Korpar, *
 * 2015-10-19\n" into the standard error.
 * Return: Always 0 (Succees)
 */
int main(void)
{
	perror("and that piece of art is useful "
			"- Dora Korpar, * 2015-10-19\n");
	return (0);
}
