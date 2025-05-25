#include <stdlib.h>
#include <stddef.h>

/**
 * _isspace - returns whether c is a whitespace or not
 * @c: the character to check
 *
 * Return: 1 if c is a whitespace or the null character
 */
int _isspace(char c)
{
	return (c == ' ' || c == '\0' || c == '\t' || c == '\n'
			|| c == '\r');
}

/**
 * nword - rturns the address of the first non whitespace char in s
 * @s: the address of a string
 *
 * Return: the address of the first non-whitespace char in s or the end of s
 */
char *nword(char *s)
{
	if (*s == '\0' || !_isspace(*s))
		return (s);
	return (nword(s + 1));
}

/**
 * _wstrlen - returns the length of the first word in s
 * @s: the address of the string
 *
 * Return: the length of s
 */
int _wstrlen(char *s)
{
	if (_isspace(*s))
		return (0);
	return (_wstrlen(s + 1) + 1);
}

/**
 * cpywords - copy words from str to the res str and index it in words
 * @str: the source string
 * @res: the distanation string
 * @words: the array to store the indexes of the words
 */
void cpywords(char *str, char *res, char **words)
{
	int i, j;
	char *word;

	j = 0;
	i = 0;
	word = nword(str);
	while (*word)
	{
		words[j] = res + i;
		j++;
		while (!_isspace(*word))
		{
			res[i] = *word;
			word++;
			i++;
		}
		res[i] = '\0';
		i++;
		word = nword(word);
	}
}

/**
 * strtow - split a string into words
 * @str: the address of the string to split
 *
 * Return: return the address of the first splitted word
 */
char **strtow(char *str)
{
	int size, temp, wc;
	char *word, *res;
	char **words;

	if (str == NULL || *str == '\0')
		return (NULL);

	wc = 0;
	size = 0;
	word = nword(str);
	if (*word == '\0')
		return (NULL);
	while (*word)
	{
		wc++;
		temp = _wstrlen(word);
		size += temp + 1;
		word = nword(word + temp);
	}

	res = malloc(sizeof(*res) * size);
	if (res == NULL)
		return (NULL);

	words = malloc(sizeof(words) * (wc + 1));
	if (words == NULL)
	{
		free(res);
		return (NULL);
	}

	cpywords(str, res, words);

	return (words);
}
