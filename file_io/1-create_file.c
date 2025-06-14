#include <fcntl.h>
#include <unistd.h>
#include <stddef.h>

/**
 * _strlen - return the length of s
 * @s: a string
 *
 * Return: the length of s
 */
int _strlen(char *s)
{
	if (s == NULL || *s == '\0')
		return (0);
	return (_strlen(s + 1) + 1);
}

/**
 * create_file - create a file and write its content
 * @filename: the name of the new file
 * @text_content: the content of the new file
 *
 * Return: 1 on success or -1 on failre
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int count;
	int wbytes;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 0600);
	count = _strlen(text_content);
	if (count != 0)
	{
		wbytes = write(fd, text_content, count);
		if (wbytes < 0)
			return (-1);
	}
	close(fd);
	return (1);
}
