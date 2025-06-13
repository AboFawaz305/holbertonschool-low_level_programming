#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stddef.h>

/**
 * read_textfile - read a text file and then print it
 * @filename: the name of the file
 * @letters: the number of letters it should read
 *
 * Return: the number of letters read'ed and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int rbytes;
	int wbytes;
	int fd;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	buffer = malloc(letters);
	if (buffer == NULL)
		return (0);
	rbytes = read(fd, buffer, letters);
	close(fd);
	if (rbytes < 0)
	{
		free(buffer);
		return (0);
	}
	wbytes = write(STDOUT_FILENO, buffer, rbytes);
	free(buffer);
	if (wbytes < 0 || wbytes != rbytes)
		return (0);
	return (wbytes);
}
