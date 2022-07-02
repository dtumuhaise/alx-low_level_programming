#include <stdio.h>
/**
 * main - function accepts void
 * Return: returns 0 at the end
 */
int main(void)
{
	char start = 'a';
	char end = 'z';

	char ch = start;

	while (ch <= end)
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
