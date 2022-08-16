#include "lists.h"

/**
 * listint_len - number of elements of a linked list
 * @h: head
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *current_node = h;
	int counter = 0;

	while (current_node != NULL)
	{
		counter++;
		current_node = current_node->next;
	}
	return (counter);
}
