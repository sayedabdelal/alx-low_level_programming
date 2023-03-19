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
	int n = 48;

	while (n <= 57)
	{
		putchar((char) n);
		n++;
	}
	putchar('\n');
	return (0);
}
