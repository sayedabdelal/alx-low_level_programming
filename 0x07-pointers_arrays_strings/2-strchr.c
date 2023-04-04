#include "main.h"

/**
 * _strchr - searches for the first occurrence of the character
 * @s: pointer to char
 * @c: char params to found
 * Return: *S + id pointer
*/

char *_strchr(char *s, char c)
{
	int id;

	for (id = 0; s[id] != '\0'; id++)
	{
		if (s[id] == c)
		{
			return (s + id);
		}
	}
	return (0);
}
