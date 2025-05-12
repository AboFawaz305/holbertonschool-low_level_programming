/**
 * leet - encode a string into 1337
 * @s: the string to encode
 *
 * Return: s
 */
char *leet(char *s)
{
	int i = 0, pos, j;
	int positions[] = {1, 5, 12, 15, 20};
	char mappings[] = {'4', '3', '1', '0', '7'};

	while (s[i])
	{
		pos = s[i] % 32;
		j = 0;
		while (j < 5)
		{
			if (pos == positions[j])
				s[i] = mappings[j];
			j++;
		}
		i++;
	}

	return (s);
}
