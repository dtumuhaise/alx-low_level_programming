#include "main.h"

/**
 * append_text_to_file - appends text to file
 * @filename: file
 * @text_content: contents
 * Return: 1 0r -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, char_app;
	int len = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		while (text_content[len])
		{
			len++;
		}
		char_app = write(fd, text_content, len);
		if (char_app != len)
		{
			return (-1);
		}
	}
	close(fd);
	return (1);
}
