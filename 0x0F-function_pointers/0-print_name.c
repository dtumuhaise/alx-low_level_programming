#include "function_pointers.h"
#include <stdio.h>
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
}
