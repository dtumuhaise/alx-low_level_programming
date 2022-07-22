#include "main.h"

/**
 * *_strpbrk - locates the first occurrence in the string
 * @s: the string
 * @accept: second string
 * Return: pointer to byte in s or Null if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	int pos, flag = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		pos = i;
	}
	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (accept[i] == s[j])
			{
				if (j <= pos)
				{
					pos = j;
					flag = 1;
				}
			}
		}
	}
	if (flag == 1)
	{
		return (&s[pos]);
	}
	else
	{
		return (0);
	}
}
