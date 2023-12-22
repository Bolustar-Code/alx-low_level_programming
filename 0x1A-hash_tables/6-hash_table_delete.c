#include "hash_tables.h"
#include <stdlib.h>

/**
 * free_node - Frees a hash node.
 * @node: The hash node to free.
 *
 * Return: Void.
 */
void free_node(hash_node_t *node)
{
	free(node->key);
	free(node->value);
	free(node);
}

/**
 * hash_table_delete - Deletes a hash table and its elements.
 * @ht: The hash table to delete.
 *
 * Return: Void.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current, *temp;

	if (ht == NULL)
	return;

	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			temp = current;
			current = current->next;
			free_node(temp);
		}
	}

	free(ht->array);
	free(ht);
}
