#include "main.h"

/**
 * set_bit - sets the value of a bit at index
 * @n: number of index
 * @index: index
 * Return: 1 if successful , -1 error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);

	*n |= (1 << index);
	return (1);
}
