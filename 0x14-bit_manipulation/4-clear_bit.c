#include "main.h"

/**
 * clear_bit - set value to 0
 * @n: n
 * @index: index
 * Return: 1 -r -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
	{
		return (-1);
	}
	*n = *n & ~(1 << index);
	return (1);
}
