#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main function takes no arguments
 * Return: Returns 0 when program stops
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int lastdigit = n % 10
	if (lastdigit > 5)
		printf("Last digit of %d", n, "is %d", lastdigit "and is greater than 5\n")
	if (lastdigit == 0)
		printf("Last digit of %d", n, "is %d", lastdigit "and is 0\n");
	if (lastdigit < 6 != 0)
		printf("Last digit of %d", n, "is %d", lastdigit "and is less than 6 and not 0\n");
	return (0);
}
