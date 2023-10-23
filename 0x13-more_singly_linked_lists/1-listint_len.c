#include <stddef.h>
#include "lists.h"

/**
 * listint_len - Function that returns the number of elements
 * in a listint_t list.
 * @h: Pointer to the head of the list.
 * Return: The number of elements.
 */
size_t listint_len(const listint_t *h)
{
	size_t number = 0;

	while (h != NULL)
	{
		h = h->next;
		number++;
	}
	return (number);
}
