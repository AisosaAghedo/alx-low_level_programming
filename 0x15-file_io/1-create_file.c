#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "main.h"
#include <stddef.h>
#include <unistd.h>
/**
 * create_file -  function that creates a file
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wr;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, "rw");
	if (fd == -1)
	{
		return (-1);
	}
	
	if (text_content == NULL)
	{
		wr = write(fd, "", 1);
		if (wr == -1)
		{
			return (-1);
		}
	}


	close(fd);
	return(1);
}

