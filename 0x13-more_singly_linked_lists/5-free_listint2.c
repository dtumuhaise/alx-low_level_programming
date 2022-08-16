#include "lists.h"

/**
 * free_listint2 - free list
 * @head: head
 */

void free_listint2(listint_t **head)
{
	listint_t *current_node, *temp;

	current_node = *head;
	while (current_node != NULL)
	{
		temp = current_node;
		current_node = temp->next;
		free(temp);
	}
	*head = NULL;
}
