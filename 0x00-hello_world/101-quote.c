#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print using write function
 *
 * Return: 1 (error)
*/

int main(void)
{
	char ro[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, ro, 59);
	return (1);
}
