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
 * append_text_to_file - append text at the end of the file
 * @filename: the name of the file
 * @text_content: the content to append
 *
 * Return: 1 on success or -1 on failre
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int count;
	int wbytes;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);
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
