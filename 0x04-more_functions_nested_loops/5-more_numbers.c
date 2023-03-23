#include "main.h"
#include <stdio.h>

/**
 * more_numbers - Print numbers between 0 to 14 incl.
 *
 * Return: Void.
*/

void more_numbers(void)
{
	int i, j;
	int n1, n2;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				n1 = j / 10;
				n2 = j % 10;
				_putchar(n1 + '0');
				_putchar(n2 + '0');
			} else
				_putchar(j + '0');
		}
		_putchar('\n');
	}

}
