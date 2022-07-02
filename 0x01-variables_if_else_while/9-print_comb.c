#include <stdio.h>
/**
 * main - main function void
 * Return: Return 0 after execution
 */
int main(void)
{
	int i;

	for (i = 0; i < 9; i++)
	{
		putchar(i + '0');
		putchar(',');
		putchar(' ');
	}
	putchar(9 + '0') ('\n');
	return (0);
}
