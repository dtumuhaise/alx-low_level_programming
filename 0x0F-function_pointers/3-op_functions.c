#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - adds
 * @a: a
 * @b: b
 * Return: sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts
 * @a: a
 * @b: b
 * Return: sub
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies
 * @a: a
 * @b: b
 * Return: mul
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides
 * @a: a
 * @b: b
 * Return: divison
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - modulus
 * @a: a
 * @b: b
 * Return: modulus
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
