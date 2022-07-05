#include "main.h"
/**
 * jack_bauer - print every minuite of the day
 *
 * Return: 0
 */
void jack_bauer(void)
{
	int a, b, c, d;

	for (a = 0; a <= 2; a++)
	{
		_putchar(a + '0');
	}
	for (b = 0; b <= 3; b++)
	{
		_putchar(b + '0');
	}
	_putchar(':');
	for (c = 0; c < 6; c++)
	{
		_putchar(c + '0');
	}
	for (d = 0; d <= 9; d++)
	{
		_putchar(d + '0');
	}
}
