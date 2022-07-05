#include "main.h"
/**
 * print_last_digit - function to print last digit of a number
 * @n: the number to be entered
 * Return: returns value of last digit
 */
int print_last_digit(int n)
{
	int lastdigit;

	lastdigit = n % 10;
	return (lastdigit);
}
