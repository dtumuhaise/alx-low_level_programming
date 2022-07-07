#include "main.h"
/**
 * print_most_numbers - prints the numbers, from 0 to 9
 *
 * Return: always 0
 */
void print_most_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		if (i == 2 || i == 4)
		{
			i++;
		}
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
