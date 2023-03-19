#include <stdio.h>

/**
 * main - entry point
 *
 * Description : prints numbers with separated by , followed by a space
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	char n = '0';

	while (n <= '9')
	{
		putchar(n);
		if (n != '9')
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
