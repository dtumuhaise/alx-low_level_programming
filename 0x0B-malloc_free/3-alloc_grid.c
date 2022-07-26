#include "main.h"

/**
 * **alloc_grid - returns pointer to a 2D array of integers
 * @width: array width
 * @height: Array height
 * Return: Null on gailure, 0 or negative
 */

int **alloc_grid(int width, int height)
{
	int i, j, k, **mem;

	if (width <= 0 || height <= 0)
	{
		return ('\0');
	}
	mem = malloc(sizeof(int *) * height);

	if (mem == NULL)
	{
		free(mem);
		return ('\0');
	}

	for (i = 0; i < height; i++)
	{
		mem[i] = malloc(sizeof(int) * width);

		if (mem[i] == NULL)
		{
			for (k = i; k >= 0; k--)
			{
				free(mem[k]);
			}
			free(mem);
			return ('\0');
		}

		for (j = 0; j < width; j++)
		{
			mem[i][j] = 0;
		}
	}
	return (mem);
}
