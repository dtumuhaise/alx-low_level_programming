#include <stdio.h>
/** main - runs without parameters
 * Return: Returns 0 at the end of the program
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %d\n bytes(s)", sizeof(a));
	printf("Size of an int: %d\n bytes(s)", sizeof(b));
	printf("Size of a long int: %d\n byte(s)", sizeof(c));
	printf("Size of a long long int: %d\n byte(s)", sizeof(d));
	printf("Size of a float: %d\n bytes(s)", sizeof(e));
	return (0);
}
