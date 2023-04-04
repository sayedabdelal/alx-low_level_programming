#include "main.h"

/**
 * _memset - used to fill a block of memory with a particular value.
 * @s: pointer to char parameter
 * @b: information to change array
 * @n: index
 * Return: *s char pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int ind;

	for (ind = 0; ind < n; ind++)
	{
		s[ind] = b;
	}
	return (s);
}
