#include "main.h"
#include <ctype.h>

/**
 * _islower - function checks for a lowercase character
 *
 * @ch: parameter to check a character
 *
 * Return: Always 0 (success)
*/

int _islower(int ch)
{
	if (islower(ch) == 0)
		return (0);
	else
		return (1);
}
