#include <stdio.h>
/**
 * main - main function void
 * Return: Returns 0
 */
int main(void)
{
	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
			putchar('c');
	}
	putchar('\n');
	return (0);
}
