/**
 * _strlen - returns the length of a string
 * @s: the string to calculate its length
 *
 * Return: the length of s
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 * _is_palindrome - a helper function for is_palindrome
 * @s: the index to start from
 * @e: the index to stop at
 * @str: the string to calculate
 *
 * Description: checks using recursion this funciton is supposed to be used by
 * is_palindrome
 * Return: whether str is a palindrome or not
 */
int _is_palindrome(int s, int e, char *str)
{
	if (s >= e)
		return (1);
	return ((str[s] == str[e]) && _is_palindrome(s + 1, e - 1, str));
}

/**
 * is_palindrome - returns whether s is a palindrome or not
 * @s: the string to check
 *
 * Description: checks using recursion.
 * Return: 1 if s is a plaindrome and 0 otherwise
 */
int is_palindrome(char *s)
{
	int end = _strlen(s);

	return (_is_palindrome(0, end - 1, s));
}
