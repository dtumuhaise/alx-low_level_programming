#include "main.h"

/**
 * _sqrt_recursion - returns the natural sqr rt of number
 * @n: the number
 * Return: natrual sqrrt
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - square root
 * @n: number 1
 * @i: other number
 * Return: sqrt
 */
int _sqrt(int n, int i)
{
	if (n < 0)
	{
		return (-1);
	}
	if ((i * i) > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (_sqrt(n, i + 1));
}
