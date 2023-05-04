#include "main.h"

/**
 * get_endianness - return  the endianness of system
 * Return: 0 if big endian, 1 if small endian
 */
int get_endianness(void)
{
	unsigned long int i = 1;

	return (*(char *)&i);
}
