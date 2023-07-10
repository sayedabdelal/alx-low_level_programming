#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table to print
 *
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *noode;
	char *comma = "";

	if (ht == NULL)
		return;
	printf("{");
	while (i < ht->size)
	{
		noode = ht->array[i];
		while (noode != NULL)
		{
			printf("%s'%s': '%s'", comma, noode->key, noode->value);
			comma = ", ";
			noode = noode->next;
		}
		i++;
	}
	printf("}\n");
}
