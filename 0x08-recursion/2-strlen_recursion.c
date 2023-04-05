#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to calculate the length of
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	int id;

	if (*s == '\0')
	{
	id += 1 + _strlen_recursion(s + 1);
	}
	return (id);
}
