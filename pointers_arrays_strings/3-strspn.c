/**
 * _strspn - return the number of chars in s that are in accept
 * @s: the string address
 * @accept: the chars to detect in s
 *
 * Return: the number of first chars in s that are in accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j = 0, acc = 0, isNotFound = 1;

	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				acc++;
				isNotFound = 0;
				break;
			}
			j++;
		}
		if (isNotFound)
			return (acc);
		isNotFound = 1;
		i++;
	}

	return (acc);
}
