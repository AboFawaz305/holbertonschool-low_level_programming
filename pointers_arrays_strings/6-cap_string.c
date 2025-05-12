/**
 * cap_string - capitalize all words of a string
 * @s: the string to capitalize
 *
 * Return: s
 */
char *cap_string(char *s)
{
	int i = 0;

	if (s[i] >= 'a' && s[i] <= 'z')
		s[i] = s[i] - 32;

	while (s[i])
	{
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' ||
			s[i] == ',' || s[i] == ';' || s[i] == '.' ||
			s[i] == '!' || s[i] == '?' || s[i] == '"' ||
			s[i] == '(' || s[i] == ')' || s[i] == '{' ||
			s[i] == '}')
			if (s[i+1] >= 'a' && s[i+1] <= 'z')
				s[i+1] = s[i+1] - 32;
		i++;
	}

	return (s);
}
