#include "main.h"

/**
 * *leet - encodes a string into 1337
 * @c: character
 * Return: c
 */

char *leet(char *c)
{
	int i, j;
	char letters[] = "aeotl";
	char up_letters[] = "AEOTL";
	char numbers[] = "43071";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (c[i] == letters[j] || c[i] == up_letters[j])
			{
				c[i] = numbers[j];
			}
		}
	}
	return (c);
}
