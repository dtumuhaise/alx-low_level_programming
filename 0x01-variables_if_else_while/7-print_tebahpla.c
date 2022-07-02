#include <stdio.h>
/**
 * main - Void function takes no parameters
 * Return: Returns 0 after executing
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'z'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
