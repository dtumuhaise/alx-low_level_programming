#include "main.h"
/**
 * *_strncpy - copies a string
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * Return: destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && *(src + 1))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}
