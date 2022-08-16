#include "lists.h"

/**
 * print_listint - print elements of a list
 * @h: head
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *temp = h;
	int counter = 0;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		counter++;
	}
	return (counter);
}
