#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a dlistint_t list
 * @h: Pointer to the head of the list
 * Return: The number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current_node = h;
	size_t node_num = 0;

	while (current_node != NULL)
	{
		current_node = current_node->next;
		node_num++;
	}
	return (node_num);
}
