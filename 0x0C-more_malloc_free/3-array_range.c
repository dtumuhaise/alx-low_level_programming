#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: min
 * @max: max
 * Return: pointer to newly created array
 */

int *array_range(int min, int max)
{
	int *arr;
	int i, n;

	if (min > max)
	{
		return (NULL);
	}

	n = max - min + 1;
	arr = malloc(sizeof(int) * n);

	if (!arr)
	{
		return (NULL);
	}

	for (i = 0; i < n; i++)
	{
		arr[i] = min++;
	}
	return (arr);
}
