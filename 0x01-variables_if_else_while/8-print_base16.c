#include <stdio.h>
/**
 * main - main function void
 * Return: return 0 after execution
 */
int main(void)
{
	int i;
	char ch;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
