#include "main.h"

/**
 * get_bit - returns value of bit at a given index
 * @n: bit
 * @index: index
 * Return: value of bit at index or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (0);
	}

	n = n >> index;
	if ((n & 1) != 0)
	{
		return (1);
	}
	return (0);
}
