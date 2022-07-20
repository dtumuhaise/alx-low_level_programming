#include "main.h"

/**
 * prime_check - check a number that is prime
 * @i: factor
 * @num: possible prime number
 * Return: 1 if prime 0 otherwise
 */

int prime_check(int i, int num)
{
	if (num < 2 || num % i == 0)
	{
		return (0);
	}
	else if (i > num / 2)
	{
		return (1);
	}
	else
	{
		return (prime_check(i + 1, num));
	}
}

/**
 * is_prime_number - returns 1 if in is prime number
 * @n: the integer
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}
	return (prime_check(2, n));
}
