#include "main.h"

/**
 * _puts_recursion -writes a string to stdout up to but not including
 * the null character and add a new line.
 *
 * @s: string to print
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
