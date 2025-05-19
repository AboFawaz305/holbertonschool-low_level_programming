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
 * str_concat - concat s1 and s2
 * @s1: the first part of the result
 * @s2: the string to append on s1
 *
 * Return: the address of the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int size = 0, i, j;
	char *res;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size += _strlen(s1);
	size += _strlen(s2);

	res = (char *) malloc(sizeof(char) * (size + 1));
	if (res == NULL)
		return (NULL);

	i = 0;
	while (s1[i])
	{
		res[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		res[i] = s2[j];
		j++;
		i++;
	}
	res[i] = '\0';
	return (res);
}
