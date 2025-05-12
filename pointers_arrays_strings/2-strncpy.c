/**
 * _strncat - concatenate dest and src and store the result inside dest
 * @dest: the concatenated string destination address
 * @src: the address of string to concatenate with dest
 * @n: the maximum number of bytes to concatenate from src
 *
 * Return: the destination string address
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
		dest[i++] = '\0';
	dest[i] = '\0';
	return (dest);
}
