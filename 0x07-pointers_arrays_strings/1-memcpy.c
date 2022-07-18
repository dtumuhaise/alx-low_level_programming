#include "main.h"

/**
 * *_memcpy - copies memory area
 * @dest: copy to mem area
 * @src: copy from this area
 * Return: to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		src[i] = dest[i];
	}
	return ((void *)dest);
}
