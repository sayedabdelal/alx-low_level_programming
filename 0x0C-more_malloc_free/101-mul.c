#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strlen - computes the length of a string
 * @s: the string to compute the length of
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
		;
	return (len);
}

/**
 * _isdigit - checks if a character is a digit
 * @c: the character to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 *
 * Return: the integer value of the string
 */
int _atoi(char *s)
{
	int sign = 1;
	int value = 0;

	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	while (*s != '\0')
	{
		if (!_isdigit(*s))
		{
			printf("Error\n");
