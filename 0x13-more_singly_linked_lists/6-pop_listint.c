#include "lists.h"

/**
 * pop_listint - deletes head node
 * @head: head node
 * Return: 0
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
	{
		return (0);
	}
	temp = *head;
	*head = temp->next;
	data = temp->n;
	free(temp);

	return (data);
}
