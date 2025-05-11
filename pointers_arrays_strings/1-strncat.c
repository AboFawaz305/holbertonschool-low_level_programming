/**
 * _strncat - concatenate dest and src and store the result inside dest
 * @dest: the concatenated string destination address
 * @src: the address of string to concatenate with dest
 * @n: the maximum number of bytes to concatenate from src
 *
 * Return: the destination string address
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
		dest[i++] = src[j++];

	dest[i] = '\0';
	return (dest);
}
