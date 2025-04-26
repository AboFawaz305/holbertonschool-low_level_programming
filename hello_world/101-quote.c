#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: prints "and that piece of art is useful\" - Dora Korpar, *
 * 2015-10-19\n" to the standard error stream.
 * Return: Always 0 (Succees)
 */
int main(void)
{
	write(2,"and that piece of art is useful "
			"- Dora Korpar, * 2015-10-19\n", 60);
	return (0);
}
