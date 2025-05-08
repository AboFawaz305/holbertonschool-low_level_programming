/**
 * _strcpy - copy src into dst
 * @src: the source string address
 * @dst: the destination to copy the string
 *
 * Return: the destination address
 */
char *_strcpy(char *dst, char *src)
{
	int i = 0;

	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
