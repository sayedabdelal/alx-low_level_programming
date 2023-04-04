#include "main.h"

/**
 * *_strpbrk - finds the first character in the string
* @s: string to work in it
 * @accept: string the bytes
 *
 * Return: pointer to the byte in s that matches one of the bytes if accept
 */
char *_strpbrk(char *s, char *accept)
{
	int id, jd;
	char *p;

	for (id = 0; s[id] != '\0'; id++)
	{
		for (j = 0; accept[jd] != '\0'; j++)
		{
			if (s[id] == accept[jd])
			{
				p = &s[id]
				return (p);
			}
		}
	}

	return (0);
}
