#include "main.h"

/**
 * print_binary - prints the binary from number
 * @n: parameter
 */

void print_binary(unsigned long int n)
{
	int started = 0;
	int i = sizeof(n) * 8 - 1;

	for (; i >= 0; i--)
	{
		if ((n >> i) & 1)
		{
			started = 1;
			_putchar('1');
		}
		else if (started)
			_putchar('0');
	}

	if (!started)
		_putchar('0');
}
