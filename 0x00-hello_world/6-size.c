#include <stdio.h>
/** main - runs without parameters
 * Return: Returns 0 at the end of the program
 */
int main ()
{
	printf("%d\n", "Size of a char: "sizeof(char));
	printf("%d\n", "Size of an int: " sizeof(int));
	printf("%s\n", "Size of a long int: " sizeof(long int));
	printf("%s\n", "Size of a long long int: " sizeof(long long int));
	printf("%s\n", "Size of a float: " sizeof(float));
	return (0);
}
