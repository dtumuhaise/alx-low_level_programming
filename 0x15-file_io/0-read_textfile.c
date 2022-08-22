#include "main.h"

/**
 * read_textfile - read textfile and print to POSIX
 * @filename: name of file
 * @letters: number of letters read and printed
 * Return: number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int f, r, w;
	char *buf;

	if (filename == NULL)
	{
		return (0);
	}

	f = open(filename, O_RDONLY);
	if (f == -1)
	{
		return (0);
	}

	buf = malloc(sizeof(char) * letters);

	if (buf == NULL)
	{
		return (0);
	}

	r = read(f, buf, letters);

	if (r == -1)
	{
		return (0);
	}

	w = write(STDOUT_FILENO, buf, r);
	if (w == -1)
	{
		return (0);
	}
	close(f);
	free(buf);
	return (w);
}
