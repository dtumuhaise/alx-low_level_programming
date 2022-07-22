#include "main.h"

/**
 * *_memcpy - copies memory area
 * @dest: copy to mem area
 * @src: copy from this area
 * @n: number of bytes to be copied
 * Return: to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return ((void *)dest);
}
