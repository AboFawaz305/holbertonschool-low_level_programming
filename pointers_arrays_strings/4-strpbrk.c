#include <stddef.h>

/**
 * _strpbrk - search s for any of the bytes in accept
 * @s: the string to search in
 * @accept: the bytes to search for
 *
 * Return: the address of the first found byte, or NULL if no such a byte is
 * found.
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j = 0;

	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
				return (s + i);
			j++;
		}
		i++;
	}

	return (NULL);
}
