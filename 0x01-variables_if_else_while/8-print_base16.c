#include <stdio.h>

/**
 * main - entry point
 *
 * Description : prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	char n = '0';
	char nx = 'a';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	while (nx <= 'f')
	{
	putchar(nx);
		nx++;
	}
	putchar('\n');
	return (0);
}
