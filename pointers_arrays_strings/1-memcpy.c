/**
 * _memcpy - copy the first n bytes from src to dest
 * @src: the source address
 * @dest: the destination address
 * @n: the number of bytes to copy from src
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
