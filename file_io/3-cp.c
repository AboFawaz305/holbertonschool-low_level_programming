#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * copy - copy src to dst
 * @src: src fd
 * @dst: dst fd
 * @argv: arguments vector
 */
void copy(int src, int dst, char *argv[])
{
	int rbytes = 1;
	char buff[1024];

	while (rbytes > 0)
	{
		rbytes = read(src, buff, 1024);
		if (rbytes == 0)
			break;
		if (rbytes < 0)
		{
			close(src);
			close(dst);
			dprintf(
					STDERR_FILENO,
					"Error: Can't read from file %s\n",
					argv[1]
				);
			exit(98);
		}
		if (write(dst, buff, rbytes) < 0)
		{
			close(src);
			close(dst);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n"
					, argv[2]);
			exit(99);
		}
	}
}

/**
 * main - a program that copy a file
 * @argc: the arguments count
 * @argv: the arguments vector
 *
 * Return: 0 on success or non-0 on failure
 */
int main(int argc, char *argv[])
{
	int src;
	int dst;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}
	src = open(argv[1], O_RDONLY);
	if (src < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n"
				, argv[1]);
		return (98);
	}
	dst = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	copy(src, dst, argv);
	if (close(src))
	{
		close(dst);
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", src);
		return (100);
	}
	if (close(dst))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", dst);
		return (100);
	}
	return (0);
}
