/**
 * _strcmp - compare at most n bytes from the strings s1 and s2
 * @s1: the first string to compare
 * @s2: the second string to compare
 *
 * Return: 0 if s1 = s2 qual and positive if s1 > s2 and negative if s1 < s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, c = 0;

	while (c == 0 && s1[i] && s2[i])
	{
		c = s1[i] - s2[i];
		i += 1;
	}
	if (!s1[i] || !s2[i])
		return (s1[i] - s2[i]);
	return (c);
}
