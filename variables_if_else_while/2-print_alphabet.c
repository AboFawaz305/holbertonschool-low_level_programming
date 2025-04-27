
#include <stdlib.h>
#include <stdio.h>


/**
 * main - Entry point
 *
 * Description: prints the alphabet in lowercase and then print a newline.
 * Return: Always (0) Success
 */
int main(void)
{
	for (char c='a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
