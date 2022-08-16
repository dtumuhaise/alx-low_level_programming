#include "lists.h"

/**
 * get_nodeint_at_index - returns  nth node
 * @head: head
 * @index: index
 * Return: nth node or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	while (count < index)
	{
		head = head->next;
		count++;
		if (head == NULL)
		{
			return (NULL);
		}
	}
	return (head);
}
