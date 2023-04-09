#include "main.h"
#include <ctype.h>

/**
 * _isalpha - function checks for a character is alpha or not
 *
 * @ch: parameter to check a character
 *
 * Return: Always 0 (success)
*/

int  _isalpha(int ch)
{
	if (isalpha(ch) == 0)
		return (0);
	else
		return (1);
}
