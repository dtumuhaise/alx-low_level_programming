#include "main.h"

/**
 * *create_array - creates an array of chars
 * @c: character
 * @size: size of array
 * Return: Null or pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return ('\0');
	}

	arr = malloc(size);

	if (arr == NULL)
	{
		return ('\0');
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	arr[size] = '\0';
	return (arr);
}
