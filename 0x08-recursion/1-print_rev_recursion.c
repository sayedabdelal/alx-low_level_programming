#include "main.h"

/**
 * _print_rev_recursion - print array of string in revrse by recursion program.
 * @s: string to print
 */
void _print_rev_recursion(char *s)
{
	if (*s > '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
