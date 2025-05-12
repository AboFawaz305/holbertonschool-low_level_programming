#include <stddef.h>

/**
 * _strchr - locates c in s
 * @s: the string address
 * @c: the character to locate in s
 *
 * Return: the address of the first occurrence of c, or NULL if c is not found
 */
char *_strchr(char *s, char c)
{
	char *f = s;

	while (*f)
	{
		if (*f == c)
			return (f);
		f++;
	}

	return (NULL);
}
