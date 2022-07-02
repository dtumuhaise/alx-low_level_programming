#include <stdio.h>
/**
 * main - function takes no arguments
 * Return: returns 0 after execution
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
