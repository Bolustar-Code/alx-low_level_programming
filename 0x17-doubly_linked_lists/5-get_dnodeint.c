#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t list
 * @head: Pointer to the head of the list
 * @index: Index of the node, starting from 0
 * Return: Pointer to the nth node, or NULL if it does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int nth_node = 0;
	dlistint_t *current_node = head;

	while (current_node != NULL)
	{
		if (nth_node == index)
		return (current_node);

		current_node = current_node->next;
		nth_node++;
	}

	return (NULL);
}
