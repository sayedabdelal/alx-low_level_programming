#include "main.h"

/**
 * flip_bits - return number of bits you would need to flip
 * to get from one number to another
 * @n: parameter
 * @m: secend number
 * Return: number of bits to flip to convert numbers
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int nflips = 0;
	unsigned long int xor_value = n ^ m;

	while (xor_value)
	{
		nflips += xor_value & 1;
		xor_value >>= 1;
	}

	return (nflips);
}
