#include "main.h"
/**
 * *_calloc - allocates memoru for an array
 * @nmemb: number of elements to be allocated
 * @size: size of elements
 * Return: pointer to allocated memory or null
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p, *q;
	unsigned int i, j;
	
	if (!nmemb || !size)
	{
		return (NULL);
	}

	j = nmemb * size;
	p = q = malloc(j);

	if (p != NULL)
	{
		for (i = 0; i < j; i++)
		{
			*p++ = 0;
		}
	}
	return (q);
}
