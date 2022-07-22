#include "main.h"
#include <stdlib.h>

/**
 * main - multiplies 2 numbers
 * @argc: argc
 * @argv: argv
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int i, j;
	int mul = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	j = atoi(argv[2]);
	mul = i * j;

	printf("%d\n", mul);
	return (0);
}
