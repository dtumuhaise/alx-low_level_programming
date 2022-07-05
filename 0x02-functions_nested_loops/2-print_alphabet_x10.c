#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet
 */
void print_alphabet_x10(void)
{
	char ch;
	int n = 10;

	for (n = 1; n <= 10; n++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
