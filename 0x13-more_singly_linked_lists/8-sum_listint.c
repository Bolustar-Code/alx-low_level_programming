#include <stddef.h>
#include "lists.h"

/**
 * sum_listint - Function that returns the
 * sum of all the data (n) in a listint_t linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: The sum of all data values, or 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	int sumdata = 0;

	while (head != NULL)
	{
		sumdata += head->n;
		head = head->next;
	}

	return (sumdata);
}
