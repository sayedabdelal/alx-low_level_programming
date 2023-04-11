#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string.
 *
 * Return: pointer of an array of chars
*/

char *_strdup(char *str)
{
	int i, size = 0;
	char *new;

	if (str == NULL)
		return (NULL);

	for (; str[size] != '\0'; size++)
		;
	/* 1 is a size of end string */
	new = (char *)malloc(size * sizeof(*str) + 1);
	if (new == 0)
		return (NULL);

	for (i = 0; i <= size ; i++)
		new[i] = str[i];

	return (new);
}
