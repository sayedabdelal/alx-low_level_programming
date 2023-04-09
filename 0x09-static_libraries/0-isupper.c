#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _isupper - Check if paramter c represents an uppercase letter.
 * @c: Int representing a character
 * Return: Always 0.
*/

int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
