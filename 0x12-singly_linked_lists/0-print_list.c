#include "lists.h"
/**
 * print_list - prints elements of list
 * @h: pointer
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int node_num = 0;
	const list_t *current_node = h;

	while (current_node != NULL)
	{
		if (current_node->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", current_node->len, current_node->str);
		}
		current_node = current_node->next;
		node_num++;
	}
	return (node_num);
}
