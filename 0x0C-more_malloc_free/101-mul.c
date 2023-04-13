#include <stdio.h>
#include <stdlib.h>

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
			exit(98);
		}
		value = value * 10 + (*s - '0');
		s++;
	}
	return (sign * value);
}

/**
 * _itoa - converts an integer to a string
 * @n: the integer to convert
 * @s: the buffer to store the string in
 *
 * Return: a pointer to the buffer containing the string
 */
char *_itoa(int n, char *s)
{
	int i = 0;
	int sign = 1;
	int j;
	char temp;

	if (n < 0)
	{
		sign = -1;
		n = -n;
	}

	do {
		s[i++] = n % 10 + '0';
		n /= 10;
	} while (n > 0);
	if (sign < 0)
	{
		s[i++] = '-';
	}
	s[i] = '\0';
	/* Reverse the string */
	j = 0;
	while (j < i / 2)
	{
		temp = s[j];
		s[j] = s[i - j - 1];
		s[i - j - 1] = temp;
		j++;
	}
	return (s);
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
	int num1, num2, result, i, j;
	char buffer[1024];

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
	/* Convert the arguments to integers */
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);

	/* Multiply the numbers */
	result = num1 * num2;
	/* Convert the result to a string and print it */
	printf("%s\n", _itoa(result, buffer));

	return (0);
}
