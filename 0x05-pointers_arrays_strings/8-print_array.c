#include "main.h"
#include <stdio.h>
/**
 * print_array - frints n elements of an array of integers
 * @n: length
 * @a: whats printed
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
