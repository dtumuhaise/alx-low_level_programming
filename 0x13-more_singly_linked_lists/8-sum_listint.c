#include "lists.h"

/**
 * sum_listint - return summ of all data
 * @head: head
 * Return: sum or 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
