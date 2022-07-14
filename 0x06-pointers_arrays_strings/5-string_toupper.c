#include "main.h"
/**
 * *string_toupper - change to uppercase
 * @s: the string
 * Return: s
 */
char *string_toupper(char *s)
{
	int n = 0;

	while (*(s + n) != '\0')
	{
		if (*(s + n) >= 'a' && *(s + n) <= 'z')
		{
			*(s + n) = *(s + n) - 32;
		}
		n++;
	}
	return (s);
}
