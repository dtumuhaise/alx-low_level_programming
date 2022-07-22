#include "main.h"
#include <stdlib.h>

/**
 * main - adds possitive numbers
 * @argc: argc
 * @argv: argv
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, j;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
	sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
