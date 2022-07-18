#include "main.h"

/**
 * *_memset - fills memomy with a constant byte
 * @s: pointer of the mem location where memory will be set
 * @b: value to be coppued to memory block
 * @n: number of bytes in the memory block which is set
 * Return: Pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return ((void *)s);
}
