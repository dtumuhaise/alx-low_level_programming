#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content: contents of file
 * Return: 1 0r -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd, w;
	int len = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		while (text_content[len])
		{
			len++;
		}
		w = write(fd, text_content, len);
		if (w != len)
		{
			return (-1);
		}
	}
	close(fd);
	return (1);
}
