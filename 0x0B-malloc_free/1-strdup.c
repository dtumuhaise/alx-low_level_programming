#include "main.h"

/**
 * *_strdup - returns pointer to newly allowcated space in memory
 * @str: str pointer
 * Return: pointer or NULL
 */

char *_strdup(char *str)
{
	char *c;
	char *p;
	int len = 0;

	if (str == NULL)
	{
		return ('\0');
	}

	while (str[len])
	{
		len++;
	}
	c = malloc(len + 1);
	p = c;

	if (c == NULL)
	{
		return ('\0');
	}
	while (*str)
	{
		*p++ = *str++;
	}
	*p = '\0';
	return (c);
}
