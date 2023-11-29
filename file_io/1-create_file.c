#include "main.h"

/**
 * create_file - create file
 * Return: 1 on succes -1 on failure
 * @filename: file name
 * @text_content: text content
 */

int create_file(const char *filename, char *text_content)
{
	int fd, write_status;
	mode_t file_permissions = S_IRUSR | S_IWUSR;


	if (filename == NULL)
	{
		return (-1); }

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, file_permissions);

	if (fd == -1)
	{
		return (-1); }

	if (text_content != NULL)
	{
		write_status = write(fd, text_content, strlen(text_content));

	if (write_status == -1)
	{
		close(fd);
		return (-1);
	}
	}
	close(fd);
	return (1);
}
