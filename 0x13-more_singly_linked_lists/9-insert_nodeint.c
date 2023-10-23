#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Function that inserts
 * a new node at a given position in a listint_t list.
 * @head: Pointer to a pointer to the head of the list.
 * @idx: The index where the new node should be added (starting at 0).
 * @n: The integer value for the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode;
	listint_t *current = *head;
	listint_t *oldnode = NULL;
	unsigned int number = 0;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	return (NULL);

	newnode->n = n;
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	while (number < idx && current != NULL)
	{
		oldnode = current;
		current = current->next;
		number++;
	}
	if (number == idx)
	{
		newnode->next = current;
		oldnode->next = newnode;
		return (newnode);
	}
	free(newnode);
	return (NULL);
}

