#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodecount = 0;
	const listint_t *current = head;
	const listint_t *loopnode = NULL;

	while (current != NULL)
	{
		nodecount++;
		printf("[%p] %d\n", (void *)current, current->n);

		if (current == loopnode)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			exit(98);
		}

		current = current->next;

		if (nodecount == 1)
		loopnode = head;
	}

	return (nodecount);
}

