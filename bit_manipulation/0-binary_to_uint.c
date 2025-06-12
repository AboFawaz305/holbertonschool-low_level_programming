#include <stddef.h>

/**
 * binary_to_uint - convert a binary number into an unsigned int
 * @b: a binary string
 *
 * Return: the binary string converted into an integer or 0 on failure
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int x = 0;
	unsigned int i = 1;
	const char *c = b;
	const char *n = b;

	if (b == NULL)
		return (0);

	while (*c && *c == '0')
		c++;

	n = c;
	while (*c && c[1])
	{
		i <<= 1;
		c++;
	}

	while (*n)
	{
		switch (*n)
		{
			case '1':
				x += i;
			case '0':
				break;
			default:
				return (0);
		}
		i >>= 1;
		n++;
	}
	return (x);
}
