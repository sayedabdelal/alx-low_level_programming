#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars.
 * @size: size of the array.
 * @c: storaged char
 *
 * Return: pointer of an array of chars
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = (char *)malloc(sizeof(c) * size);

	if (size == 0 || ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size ; i++)
	{
		ptr[i] = c;
	}

	return (ptr);
}
