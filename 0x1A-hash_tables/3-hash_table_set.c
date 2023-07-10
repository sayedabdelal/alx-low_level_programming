#include "hash_tables.h"

/**
 * hash_table_set - adds an ele to the hash table
 * @ht: A pointer to the hash table.
 * @key: key to add
 * @value: value associated with key
 *
 * Return: 1 if successful, 0 if not
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *tmp, *add_node;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[idx];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			temp->value = strdup(value);
			if (tmp->value == NULL)
				return (0);
			return (1);
		}
		tmp = tmp->next;
	}
	add_node = malloc(sizeof(hash_node_t));
	if (add_node == NULL)
		return (0);
	add_node->key = strdup(key);
	if (add_node->key == NULL)
	{
		free(add_node);
		return (0);
	}
	add_node->value = strdup(value);
	if (add_node->value == NULL)
	{
		free(add_node->key);
		free(add_node);
		return (0);
	}
	add_node->next = ht->array[idx];
	ht->array[idx] = add_node;
	return (1);
}
