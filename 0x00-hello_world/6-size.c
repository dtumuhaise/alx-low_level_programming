#include <stdio.h>
/** main - runs without parameters
 * Return: Returns 0 at the end of the program
 */
int main()
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: \n" sizeof(a));
	printf("Size of an int: \n" sizeof(b));
	printf("Size of a long int: \n" sizeof(c));
	printf("Size of a long long int: \n" sizeof(d));
	printf("Size of a float: \n" sizeof(e));
	return (0);
}
