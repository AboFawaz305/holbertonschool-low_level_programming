/**
 * _strlen_recursion - returns the length of s
 * @s: a string to calculate its length
 *
 * Return: the length of s
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
