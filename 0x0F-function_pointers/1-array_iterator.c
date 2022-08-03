#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes a function given as a parameter on each element
 * @array: the array
 * @size: size of array
 * @action: function pointer
 */

void array_iterator(int *array, int size, void (*action)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
