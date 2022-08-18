#include "main.h"

/**
 * flip_bits - return snumber of bits to flip
 * @n: number
 * @m: number to get to
 * Return: number of bits needed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = n ^ m;
	unsigned int count = 0;

	while (i > 0)
	{
		i &= (i - 1);
		count++;
	}
	return (count);
}
