#include "main.h"

int act_prime(int n, int i);

/**
 * is_prime_number - says if an integer is a prime number or not
 * @n: number to evaluate
 *
 * Return: 1 if n is a prime number, 0 if not
*/

int is_prime_number(int n)
{
	return (act_prime(n, 2));
}

/**
 * act_prime - calc is number is prime or not by recursion
 * @n: number
 * @i: parmeter
 *
 * Return: 1 if n is prime, 0 if not
 */

int act_prime(int n, int i)
{
	if (i >= n && n >= 2)
		return (1);
	else if (n % i == 0 || n <= 1)
		return (0);
	else
		return (act_prime(n, i + 1));
}
