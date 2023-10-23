#include <stddef.h>
#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: Pointer to a pointer to the head of the list.
 *
 * Return: The number (n value) of the deleted head node,
 * or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	int number = 0;

	if (*head != NULL)
	{
		listint_t *current = *head;

		number = current->n;
		*head = (*head)->next;
		free(current);
	}
	return (number);
}
