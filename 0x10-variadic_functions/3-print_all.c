#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments)
 */

void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	char *s;
	va_list arg;

	va_start(arg, format);

	while (format && format[i])
	{
		switch (format[i++])
		{
			case 'c':
				printf("%c", va_arg(arg, int));
				break;

			case 'i':
				printf("%d", va_arg(arg, int));
				break;

			case 'f':
				printf("%f", va_arg(arg, double));
				break;

			case 's':
				s = va_arg(arg, char*);
				printf("%s", s != NULL ? s : "(nil)");
				break;
			default:
				continue;
		}
		if (format[i])
		{
			printf(", ");
		}
	}
	printf("\n");
}
