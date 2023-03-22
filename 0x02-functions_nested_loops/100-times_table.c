#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number of the times table
*/

void print_times_table(int n)
{
	int i, j, res;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
			{
				_putchar(',');
				_putchar(' ');
				res = i * j;
				if (res <= 9)
					_putchar(' ');
				if (res <= 99)
					_putchar(' ');
				if (res >= 100)
				{
					_putchar((res / 100) + '0');
					_putchar((res / 10) % 10 + '0');
				} else if (res <= 99 && res >= 10)
					_putchar((res / 10) + '0');
				_putchar((res % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
