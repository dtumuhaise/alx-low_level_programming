#include "lists.h"

/**
 * free_listint2 - free list
 * @head: head
 */

void free_listint2(listint_t **head)
{
	listint_t *current_node;

	if (head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		current_node = (*head)->next;
		free(*head);
		*head = current_node;
	}
	*head = NULL;
	head = NULL;
}
