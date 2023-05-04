#include "main.h"

/**
 * get_bit - value of a bit at index
 * @n: number of index
 * @index: the bit ot get
 *
 * Return: bit state
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (n >> index & 1);
}
