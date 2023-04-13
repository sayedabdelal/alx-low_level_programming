#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <limits.h>
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
 * main - multiplies two positive numbers
 * @argc: the number of command-line arguments
 * @argv: an array of command-line argument strings
 *
 * Return: 0 on success, 98 on failure
 */

int main(int argc, char *argv[])
{
	int i, j;
	unsigned long mul;

	/* Check the number of arguments */
	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	/* Check that the arguments are composed of digits */
	for (i = 1; i < argc; i++)
	{
		for (j = 0; j < _strlen(argv[i]); j++)
		{
			if (!_isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (98);
			}
		}
	}
	mul = atol(argv[1]) * atol(argv[2]);
	printf("%lu\n", mul);
	return (0);
}
