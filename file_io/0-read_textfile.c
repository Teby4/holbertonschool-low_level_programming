#include "main.h"

/**
 * read_textfile - read textfile
 * Return: possix
 * @filename: filename
 * @letters: number of letters to print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, bytesRead, bytesWritten;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDWR);

	if (fd == -1)
	{
		return(0);
	}

	buffer = (char *)malloc(letters + 1);

	if (buffer == NULL)
	{
		int close(int fd);
		return (0);
	}

	bytesRead = read(fd, buffer, letters);
	close (fd);

	if (bytesRead < 0)
	{
		free (buffer);
		return (0);
	}

	buffer[bytesRead] = '\0';
	bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);

	free (buffer);

	if (bytesWritten == bytesRead)
	{
		return (bytesRead);
	}
	else
	{
		return (0);
	}
}
