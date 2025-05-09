/**
 * _atoi - return the first number inside a string
 * @s: the address of the string
 *
 * Description: the number can be preceded by an infinite number of characters
 * and all the signs before it will be taken into account that is if there is
 * an odd number of negative signs the number will be negative and only the
 * first parsed number will be returned and the numbers after it will be
 * ignored. In case there is no number in the string the return value will be
 * 0.
 * Return: the first occarred number in the string
 */
int _atoi(char *s)
{
	int i = 0, n = 0;
	char isNegative = 1;

	/* Set the sign and find the first digit of the number */
	while (!(s[i] >= '0' && s[i] <= '9') && s[i] != '\0')
	{
		if (s[i] == '-')
			isNegative *= -1;
		i++;
	}

	/* if we didnt find any number return 0 */
	if (s[i] == '\0')
		return (0);

	/* parse the number */
	while (s[i] >= '0' && s[i] <= '9' && s[i] != '\0')
	{
		n *= 10;
		n += (s[i] - '0') * isNegative;
		i++;
	}
	return (n);
}
