#include <stdlib.h>
#include <stddef.h>

/**
 * _strlen - returns the length of s
 * @s: the address of the string
 *
 * Return: the length of s
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 * string_nconcat - concat s1 and the first n bytes from s2
 * @s1: the string to append from
 * @s2: the string to append on s1
 * @n: maximum nmber of bytes to append from the begining of s2
 *
 * Return: the address of the result
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, s2size, size = 0;
	char *cstr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size += _strlen(s1);
	s2size = _strlen(s2);

	if (s2size > n)
		size += n;
	else
		size += s2size;

	cstr = malloc((size + 1) * sizeof(*cstr));
	if (cstr == NULL)
		return (NULL);

	i = 0;
	while (s1[i])
	{
		cstr[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] && j < n)
	{
		cstr[i] = s2[j];
		j++;
		i++;
	}
	cstr[i] = '\0';

	return (cstr);
}
