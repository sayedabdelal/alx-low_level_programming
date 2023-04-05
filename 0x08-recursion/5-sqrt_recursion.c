#include "main.h"

int qrt_recursion(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (qrt_recursion(n, 0));
}

/**
 * qrt_recursion - recurses to find squre of number
 *
 * @n: number to calculate the sqaure
 * @i: parmeter
 *
 * Return: the resulting square root
 */
int qrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (qrt_recursion(n, i + 1));
}
