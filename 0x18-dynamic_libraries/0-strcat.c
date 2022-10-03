#include "main.h"
/**
 * *_strcat - function that concatenates two strings
 * @dest: string 1
 * @src: string 2
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (p);
}

