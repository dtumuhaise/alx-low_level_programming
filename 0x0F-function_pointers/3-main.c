#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * @argc: number of command line arguments
 * @argv: array of caracter pointers listing all arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a, b, result;
	char s;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	s = argv[2][0];

	if (s != '+' && s != '-' && s != '*' && s != '/' && s != '%')
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	result = (get_op_func(argv[2]))(a, b);
	printf("%d\n", result);
	return (0);
}
