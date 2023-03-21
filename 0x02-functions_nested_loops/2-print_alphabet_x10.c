#include "main.h"

/**
 * print_alphabet_x10 - prints 10 alphabet
 *
 * Return: Always 0 (success)
*/

void print_alphabet_x10(void)
{
	char j;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
