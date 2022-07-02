#include <stdio.h>
/**
 * main - main function void
 * Return: Returns 0
 */
int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch != 'd'; ch++)
	for (ch = 'f'; ch != 'p'; ch++)
	for (ch = 'f'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
