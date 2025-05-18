/**
 * wildcmp - compare two strings
 * @s1: string 1
 * @s2: string 2 may contain *
 *
 * Description: * can be replaced by any string including an empty string
 * Return: 1 if s1 and s2 matches and 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 != '*' && *s1 != *s2)
		return (0);
	if (*s2 == '*')
	{
		int try1 = 0;

		if (*s1 != '\0')
			try1 = wildcmp(s1 + 1, s2);
		if (try1)
			return (1);
		return (wildcmp(s1, s2 + 1));
	}
	return (0);
}
