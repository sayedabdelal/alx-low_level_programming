#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: pointer of an array of chars
 */
char *str_concat(char *s1, char *s2)
{
	char *new;
	int i, j, k, comp;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	new = (char *)malloc(sizeof(char) * (i + j + 1));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	for (k = 0; k < i; k++)
		new[k] = s1[k];
	comp = j;
	for (j = 0; j <= comp; k++, j++)
		new[k] = s2[j];
	return (new);
}
