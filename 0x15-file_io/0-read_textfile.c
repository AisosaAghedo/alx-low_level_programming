#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - function that reads a text file and
 * prints it to the POSIX standard output
 * @letters:  number of letters it should read and print
 * @filename: name of file
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf = malloc(sizeof(char) * letters);
	ssize_t rd, wr;

	if (filename == NULL)
	{
		return (0);
	}
	if (buf == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buf);
		return (0);
	}

	rd = read(fd, buf, letters);
	buf[letters] = '\0';
	if (rd == -1)
	{
		return (0);
	}

	wr = write(STDOUT_FILENO, buf, rd);
	if (wr == -1)
	{
		return (0);
	}


	close(fd);
	free(buf);
	return (wr);
}

