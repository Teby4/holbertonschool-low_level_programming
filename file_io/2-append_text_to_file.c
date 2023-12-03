#include "main.h"

/**
 * append_text_to_file - append text to file
 * Return: 1 on succees
 * @filename: filename
 * @text_content: text content to append
 */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file;

	if (filename == NULL)
	{
		return (-1);
	}

	file = fopen(filename, "a");

	if (file == NULL)
	{
		return (-1);
	}

	fprintf(file, "%s", text_content);

	fclose(file);

	return (1);
}
