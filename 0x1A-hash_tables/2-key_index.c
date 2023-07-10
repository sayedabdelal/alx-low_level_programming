#include "hash_tables.h"

/**
 * key_index - Know the index at a key/value
 *
 * @key: The key to get the index
 * @size: The size of the array of the hash table.
 *
 * Return: The index of the key.
 * Description: Uses the djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
