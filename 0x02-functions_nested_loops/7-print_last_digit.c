#include "main.h"

/**
 * print_last_digit - function prints the value of the last digit
 *
 * @n: parameter to make process a last digit
 *
 * Return: Always 0 (success)
*/

int print_last_digit(int n)
{
	int l = n % 10;

	if (l < 0)
		l *= -1;
	_putchar(l + '0');
	return (l);
}
