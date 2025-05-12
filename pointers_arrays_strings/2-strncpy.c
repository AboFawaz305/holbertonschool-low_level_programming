/**
 * _strncpy - copy at most n bytes from src to dest 
 * @dest: the copyed string destination address
 * @src: the address of string to copy into dest
 * @n: the maximum number of bytes to copy from src
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
