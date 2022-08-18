#include "main.h"

/**
 * set_bit - set value of bit to 1
 * @n: bit
 * @index: position
 * Return: 1 or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
	{
		return (-1);
	}
	*n ^= (1 << index);
	return (1);
}
