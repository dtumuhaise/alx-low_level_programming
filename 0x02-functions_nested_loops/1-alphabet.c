#include <stdio>
#include "main.h"
/**
 * main - main function
 *
 * Return: Always 0.
 */
void print_alphabet(void);

int main(void)
{
	char ch;
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	print_alphabet(ch);
	_putchar('\n');
	return (0);
}

