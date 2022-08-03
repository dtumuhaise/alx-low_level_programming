#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: the name
 * @f: function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (f)
	{
		(*f)(name);
	}
	_putchar('\n');
}
