#include "lists.h"
/**
 * add_nodeint - Function that adds
 * a new node at the beginning of a listint_t list.
 * @head: Pointer to a pointer to the head of the list.
 * @n: The integer value to add to the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	return (NULL);

	newnode->n = n;
	newnode->next = *head;

	*head = newnode;

	return (newnode);
}
