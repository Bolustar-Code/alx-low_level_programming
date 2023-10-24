#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Function
 * that deletes the node at a given index in a listint_t list.
 * @head: Pointer to a pointer to the head of the list.
 * @index: The index of the node to be deleted (starting at 0).
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *new = *head;
	listint_t *old = NULL;
	unsigned int x = 0;

	if (*head == NULL)
	return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(new);
		return (1);
	}

	while (x < index && new != NULL)
	{
		old = new;
		new = new->next;
		x++;
	}

	if (x == index)
	{
		old->next = new->next;
		free(new);
		return (1);
	}

	return (-1);
}
