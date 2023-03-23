#include "main.h"
#include <ctype.h>

/**
 * _isdigit - Check for a digit (0-9)
 * @c: Integer holding the character
 *
 * Return: 1- Digit 0- Not
*/

int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);

}
