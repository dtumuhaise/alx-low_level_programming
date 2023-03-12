#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located
*/

int binary_search(int *array, size_t size, int value)
{
	size_t i, j, k, l, m;

	if (array == NULL)
		return (-1);
	i = 0;
	j = size - 1;
	while (i <= j)
	{
		printf("Searching in array: ");
		for (k = i; k < j; k++)
			printf("%d, ", array[k]);
		printf("%d", array[k]);
		printf("\n");
		m = (i + j) / 2;
		if (array[m] < value)
			i = m + 1;
		else if (array[m] > value)
			j = m - 1;
		else
		{
			l = m;
			return (l);
		}
	}
	return (-1);
}
