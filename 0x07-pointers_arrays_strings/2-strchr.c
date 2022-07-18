#include "main.h"

/**
 * *_strchr - locates a character in a string
 * @s: the string
 * @c: character to be located
 * Return: pointer to first occurance of c
 */

char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return ((void *)s);
	} while (*s++);

	return (0);
}
