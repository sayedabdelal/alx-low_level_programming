#include "main.h"

/**
 * jack_bauer- function prints the very minute of the day
 *
 * Return: Always 0 (success)
*/

void jack_bauer(void)
{
	int i, j;
	int n1, n2, n3, n4;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			n1 = i / 10;
			n2 = i % 10;
			n3 = j / 10;
			n4 = j % 10;
			_putchar(n1 + '0');
			_putchar(n2 + '0');
			_putchar(':');
			_putchar(n3 + '0');
			_putchar(n4 + '0');
			_putchar('\n');
		}
	}
}
