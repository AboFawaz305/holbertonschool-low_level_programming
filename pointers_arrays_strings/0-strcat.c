/**
 * _strcat - concatenate dest and src and store the result inside dest
 * @dest: the concatenated string destination address
 * @src: the address of string to concatenate with dest
 *
 * Return: the destination string address
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
		dest[i++] = src[j++];

	dest[i] = '\0';
	return (dest);
}
