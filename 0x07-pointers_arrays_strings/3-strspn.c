#include "main.h"

/**
 * *_strspn - calculates the length of the initial segment
 * @s: string to assessment
 * @accept: string containing the list of characters to calac
 *
 * Return: the number of bytes in the initial segmention
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int id, jd;

	for (id = 0; s[id] != '\0'; id++)
	{
		for (jd = 0; accept[jd] != s[id]; jd++)
		{
			if (accept[jd] == '\0')
				return (id);
		}
	}
	return (id);
}
