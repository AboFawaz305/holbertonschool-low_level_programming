#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: prints "and that piece of art is useful\" - Dora Korpar,
 * 2015-10-19\n" to the standard error stream.
 * Return: Always 1 (Failure)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" "
			"- Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
