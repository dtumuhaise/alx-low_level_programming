#include "dog.h"

/**
 * print_dog - prints struct
 * @d: the dog
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (d == NULL)
		{
			printf();
		}
		if ((*d).age == NULL)
		{
			printf("(nil)");
		}
		if ((*d).owner == NULL)
		{
			printf("(nil)");
		}
		if ((*d).name == NULL)
		{
			printf("Name: (nil)");
		}
		else
		{
			printf("Name: %s\n", (*d).name);
			printf("Age: %f\n", (*d).age);
			printf("Owner: %s\n", (*d).owner);
		}
	}
}
