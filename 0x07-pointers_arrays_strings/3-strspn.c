#include "main.h"
/**
 * _strspn - gets the length of prefix substring
 * @s: the string
 * @accept: string
 * Return: number of bytes in initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; i < s[i]; i++)
	{
		for (j = 0; j < accept[j]; j++)
		{
			if (accept[j] == s[i])
			{
				return (*s);
			}
		}
	}
	return (0);
}
