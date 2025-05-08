#include <stdlib.h>
#include <string.h>

/**
 * _strcpy - copy src into dst
 * @src: the source string address
 * @dst: the destination to copy the string
 *
 * Return: the destination address
 */
char *_strcpy(char *dst, char *src)
{
	mempcpy(dst, src, strlen(src));
	return dst;
}
