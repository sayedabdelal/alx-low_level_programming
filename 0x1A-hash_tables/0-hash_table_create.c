#include "hash_tables.h"

/**
 * hash_table_create - Creates a New  hash table.
 * @size: The size of the arr.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new hash table.
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hr;
	unsigned long int i;
	/* Allocate memory for the hash table structure*/
	hr = malloc(sizeof(hash_table_t));
	if (hr == NULL)
		return (NULL);
	hr->size = size;
	/* Allocate memory for the array of hash_node_t pointers */
	hr->array = malloc(sizeof(hash_node_t *) * size);
	if (hr->array == NULL)
		return (NULL);
	/* Initialize each element in the array to NULL*/
	for (i = 0; i < size; i++)
		hr->array[i] = NULL;
	/* Return a pointer to the newly created hash table*/
	return (hr);
}

