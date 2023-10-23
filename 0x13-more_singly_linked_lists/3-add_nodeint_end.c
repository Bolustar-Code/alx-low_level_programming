#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - Function that adds
 * a new node at the end of a listint_t list.
 * @head: Pointer to a pointer to the head of the list.
 * @n: The integer value to add to the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *current;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	return (NULL);

	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	current = *head;
	while (current->next != NULL)
	{
	current = current->next;
	}
	current->next = newnode;
	return (newnode);
}
