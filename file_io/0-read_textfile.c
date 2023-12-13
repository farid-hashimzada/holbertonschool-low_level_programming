#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - red text file
 * @filename: name list
 * @letters: content
 *
 * Return: w
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, n, w;
	char *buf = malloc(sizeof(char) * letters + 1);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd < 0)
		return (0);

	n = read(fd, buf, letters);

	w = write(STDOUT_FILENO, buf, n);

	if (fd < 0 || n < 0 || w < 0 || w != n)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(fd);

	return (w);
}
