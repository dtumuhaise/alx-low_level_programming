#include <stdio.h>
/**
 * main - void function
 * Return: returns 0
 */
int main(void)
{
	char start = 'a';
	char end = 'z';
	char start2 = 'A';
	char end2 = 'Z';

	char ch = start;
	char ch2 = start2;
	while (ch <= end)
	{
		putchar(ch);
		ch++;
		while (ch2 <= end2)
		{
			putchar(ch2);
			ch2++;
		}
	}
	putchar('\n');
	return (0);
}
