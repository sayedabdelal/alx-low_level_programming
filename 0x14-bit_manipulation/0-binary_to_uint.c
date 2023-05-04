#include "main.h"

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: the binary number as a string
 * Return: the unsigned int from of b
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
		{
			num = (num << 1) + (b[i] - '0');
		}
		else
			return (0);
		i++;
	}

	return (num);
}
