#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints all single digit numbers
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char n = '0';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
