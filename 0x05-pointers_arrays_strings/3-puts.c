#include "main.h"
/**
 * _puts - prints a string
 * @str: the string
 */
void _puts(char *str)
{
	char *p  = str;

	while (*p != '\0')
	{
		_putchar(*p);
		p++;
	}
	_putchar('\n');
}
