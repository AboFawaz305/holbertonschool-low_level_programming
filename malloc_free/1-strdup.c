#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
 * _strdup - duplicate a string
 * @str: the string to duplicate
 *
 * Return: the duplicated string location
 */
char *_strdup(char *str)
{
	char *nstr;
	int size = 0, i = 0;

	if (str == NULL)
		return (NULL);

	while (str[i])
	{
		size++;
		i++;
	}

	nstr = (char *) malloc(sizeof(char) * (size + 1));
	if (nstr == NULL)
		return (NULL);

	i = 0;
	while (str[i])
	{
		nstr[i] = str[i];
		i++;
	}
	nstr[i] = '\0';

	return (nstr);
}
