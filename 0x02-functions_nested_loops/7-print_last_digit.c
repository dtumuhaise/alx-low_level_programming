#include "main.h"
/**
 * print_last_digit - function to print last digit of a number
 * @n: the number to be entered
 * Return: returns value of last digit
 */
int print_last_digit(int n)
{
	int lastdigit;

	if (n < 0)
	{
		lastdigit = (n % 10) * -1;
	}
	else
	{
		lastdigit = n % 10;
	}
	_putchar(lastdigit + '0');
	return (lastdigit);
}
