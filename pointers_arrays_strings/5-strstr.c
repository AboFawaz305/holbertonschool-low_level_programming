#include <stddef.h>

/**
 * _strstr - returns the address of needle inside haystack
 * @haystack: the string to search in
 * @needle: the substring to search for
 *
 * Return: the address of the first occurrence of needle in haystack
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0, isFound = 0;
	char *c = haystack;

	if (needle[0] == '\0')
		return (haystack);

	while (haystack[i])
	{
		j = 0;
		c = haystack + i;
		while (needle[j])
		{
			if (c[j] == needle[j])
				isFound = 1;
			else
			{
				isFound = 0;
				break;
			}
			j++;
		}
		if (isFound)
			return (haystack + i);
		i++;
	}

	return (NULL);
}
