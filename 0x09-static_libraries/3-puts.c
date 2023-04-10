#include "main.h"

/**
 * _puts - prints string
 * @s: input string
 * Return: no return
 */

void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
