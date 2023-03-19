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
	int n = 48;

	while (n <= 57)
	{
		putchar((char)n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
