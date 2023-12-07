#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all data in a dlistint_t list
 * @head: Pointer to the head of the list
 * Return: Sum of all data, or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum_data = 0;
	dlistint_t *current_sum = head;

	while (current_sum != NULL)
	{
		sum_data += current_sum->n;
		current_sum = current_sum->next;
	}

	return (sum_data);
}
