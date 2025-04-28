#include "main.h"

/**
 * _isalpha - check if a character is a letter.
 *
 * @c: the character to be checked.
 * Return: 1 if c is a letter and 0 otherwise
 * and 0 otherwise
 */
int _isalpha(int c)
{
	return (
			(c >= 'a' && c <= 'z') ||
			(c >= 'A' && c <= 'Z')
	       );
}
