/**
 * memset - fills the first n bytes in s with a constant byte
 * @s: the address of the memory
 * @b: the constant byte to fill the memory
 * @n: the 
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
