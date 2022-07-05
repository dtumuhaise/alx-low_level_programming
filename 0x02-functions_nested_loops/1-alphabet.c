#include <stdio.h>
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
		putchar(ch);
	}
	print_alphabet(ch);
	putchar('\n');
	return (0);
}

