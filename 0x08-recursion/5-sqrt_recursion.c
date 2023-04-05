#include "main.h"

/**
 * _sqrt_recursion - return a square root
 * @n:  n
 * Return: value number
 */
int _sqrt_recursion(int n)
{
	return (sqaart(n, 1));
}

/**
 * _sqrt - _sqrt_recursion
 * @n: paramter of fun sqr
 * @i: test
 * Return: sqrt
 */
int sqaart(int n, int i)
{
	if (n < 0)
		return (-1);
	if ((i * i) > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (sqaart(n, i + 1));
}
