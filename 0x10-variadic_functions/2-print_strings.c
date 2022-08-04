#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings then new line
 * @separator: string printed between strings
 * @n: number of strings passed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	char *str;
	unsigned int i;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(arg, char *);
		printf("%s", str != NULL ? str : "(nil)");
		if (i < (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(arg);
}
