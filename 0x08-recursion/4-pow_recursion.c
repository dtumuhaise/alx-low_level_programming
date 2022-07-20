#include "main.h"

/**
 * _pow_recursion - returns x to power y
 * @x: first number
 * @y: exponent
 * Return: value of x to power y
 */

int _pow_recursion(int x, int y)
{
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (-1);
	}
}
