#include "main.h"
/**
 * _islower - checks for lowercase character
 * @c: number to be checked
 * Return: returns 1 if c is lowercase 0 otherwise
 */
int _islower(int c)
{
	if (c <= 122 && c >= 97)
		return (1);
	else
		return (0);
}
