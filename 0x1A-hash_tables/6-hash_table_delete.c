#include "hash_tables.h"

/**
 * hash_table_delete - remove a hash table
 * @ht: hash table to delete
 *
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *noode, *tmp;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		noode = ht->array[i];
		while (noode != NULL)
		{
			tmp = noode;
			noode = noode->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
		}
	}
	free(ht->array);
	free(ht);
}
