#include <stdlib.h>
#include <stddef.h>

/**
 * _strlen - returns the length of s
 * @s: the address of a string
 *
 * Return: the length of s
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen(s + 1) + 1);
}

/**
 * argstostr - transform the arguments to a single string
 * @ac: the number of arguments
 * @av: the arguments vector. av is assumed to be NULL terminated.
 *
 * Description: the arguments are delimited by a new line.
 * Return: the address of the created arguments string
 */
char *argstostr(int ac, char **av)
{
	int total_size = 0, i, j, k;
	char *res;

	if (ac == 0 || av == NULL)
		return (NULL);

	i = 0;
	while (i < ac)
	{
		total_size += _strlen(av[i]) + 1;
		i++;
	}

	res = malloc(sizeof(*res) * total_size + 1);
	if (res == NULL)
		return (NULL);

	j = 0;
	i = 0;
	k = 0;
	while (j < ac)
	{
		k = 0;
		while (av[j][k])
		{
			res[i] = av[j][k];
			k++;
			i++;
		}
		res[i] = '\n';
		i++;
		j++;
	}
	res[i] = '\0';

	return (res);
}
