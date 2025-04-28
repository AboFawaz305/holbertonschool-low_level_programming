#include "main.h"

/**
 * _islower - test whether a character is lowercase or not
 *
 * @c: the character to be checked.
 * Return: 1 if c is a lower case character
 * and 0 otherwise
 */
int _islower(int c)
{
	return c >= 'a' && c <= 'z';
}
