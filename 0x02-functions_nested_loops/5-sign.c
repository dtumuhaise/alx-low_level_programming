#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @c: The character to print
 *
 * Return: 1 and prints + if n is greater than zero, Returns 0 and prints 0 if n is zero and Returns -1 and prints - if n is less than zero
*/
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
		if (n == 0)
		{
			return (0);
			_putchar('0');
			if (n < 0)
			{
				return (-1);
				_putchar('-');
			}
		}
	}
	return (0);
}
