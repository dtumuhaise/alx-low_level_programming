#include <stdio.h>
/** main - runs without parameters
 * Return: Returns 0 at the end of the program
 */
int main (void)
{
	int x;
	char y;
	long int a;
	long long int b;
	float c;

	printf("Size of a char: %d\n" sizeof(y));
	printf("Size of an int: %d\n" sizeof(x));
	printf("Size of a long int: %d\n" sizeof(a));
	printf("Size of a long long int: %d\n" sizeof(b));
	printf("Size of a float: %d\n" sizeof(c));	
	return (0);
}
