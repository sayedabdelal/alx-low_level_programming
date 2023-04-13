#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: amount of bytes.
 *
 * Return: pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, s1_len, s2_len;

	/* check if string passed are null*/
	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
	/* calc the length of string*/
	for (s1_len = 0; s1[s1_len] != '\0'; s1_len++)
		;

	for (s2_len = 0; s2[s2_len] != '\0'; s2_len++)
		;
	/* memory reversation space for 1 & 2. 1>> null */
	str = malloc(s1_len + n + 1);

	if (str == NULL)
		return (NULL);
	/* copint the frist int str*/
	for (i = 0; s1[i] != '\0'; i++)
	{
		str[i] = s1[i];
	}
	/*copint second string*/
	for (j = 0; j < n; j++)
	{
		str[i] = s2[j];
		i++;
	}
	str[i] = '\0';
	return (str);
}
