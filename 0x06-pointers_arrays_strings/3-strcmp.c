#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: value
 */
int _strcmp(char *s1, char *s2)
{
	char *a = s1;
	char *b = s2;

	while (*a != '\0' && *b != '\0' && *a == *b)
	{
		a++;
		b++;
	}
	return (*a - *b);
}
