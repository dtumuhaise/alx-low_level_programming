#include "main.h"
#include <stdlib.h>
/**
 * _abs - comptues absolute integer
 * @n: number entered
 *  Return: Absolute integer value
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
