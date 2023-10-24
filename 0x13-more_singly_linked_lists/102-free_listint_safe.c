#include <stddef.h>
#include "lists.h"
/**
 * free_listint_safe - Frees a listint_t
 * linked list and sets the head to NULL.
 * @h: Pointer to a pointer to the head of the list.
 *
 * Return: The total num of element in the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t total = 0;
	listint_t *now = *h;
	listint_t *next;

	while (now != NULL)
	{
		next = now->next;
		free(now);
		total++;
		now = next;
	}

	*h = NULL;
	return (total);
}
