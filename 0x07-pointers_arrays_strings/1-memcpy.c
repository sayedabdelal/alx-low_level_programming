#include "main.h"

/**
 * _memcpy -  characters from memory area src to memory area dest.
 * @dest: pointer to char parameter
 * @src: pointer to char parameter
 * @n: size
 * Return: *dest array of character
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int ind;

	for (ind = 0; ind < n; ind++)
	{
		dest[ind] = src[ind];
	}
	return (dest);
}
