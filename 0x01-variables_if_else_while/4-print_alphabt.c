#include <stdio.h>
/**
 * main - main function void
 * Return: Returns 0
 */
int main(void)
{
	char ch = 'a';

	for (ch = 'a', ((ch <= 'z') && (ch != 'e')); ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
