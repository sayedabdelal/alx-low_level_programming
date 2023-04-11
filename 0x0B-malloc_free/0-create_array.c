#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars.
 * @size: size of the array.
 * @c: storaged char
 *
 * Return: pointer of an array of chars
 */

char *create_array(unsigned int size, char c);
{
	char *ptr;
	int i;

	if (size == 0 || ptr == NULL)
	{
		return (0);
	}
	ptr = (char *)malloc(sizeof(c) * size);

	for (i = 0; i < size ; i++)
	{
		ptr[i] = c;
	}

	return (ptr);
}
