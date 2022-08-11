#include "lists.h"
/**
 * list_len - returns number of elements in a linked list
 * @h: pointer to head
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	int count = 0;
	const list_t *current_node = h;

	while (current_node != NULL)
	{
		count++;
		current_node = current_node->next;
	}
	return (count);
}
