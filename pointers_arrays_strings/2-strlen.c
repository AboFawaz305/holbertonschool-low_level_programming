/**
 * _strlen - returns the length of a string
 * @s: the address of the string
 *
 * Return: the length of the string excluding the '\0' character
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i++])
		;
	return (i - 1);
}
