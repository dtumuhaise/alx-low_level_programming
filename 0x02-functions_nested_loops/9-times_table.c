#include "main.h"
/**
 * times_table - prints the 9 times table
 *
 * Return: Always 0.
 */
void times_table(void);
{
	int i, j;
	
	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		for (j = 1; j <= 9; j++)
		{
			int result = n * j;

			_putchar(',');
			_putchar(' ');
			(result <= 9) ?
			_putchar(' ') :
			_putchar('0' + (result / 10));
			_putchar('0' + (result % 10));
		}
		_putchar('\n');
	}
}
	
