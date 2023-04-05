#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to calculate length
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	int id = 0;

	if (*s > '\0')
	{
		id += _strlen_recursion(s + 1) + 1;
	}
	return (id);
}
