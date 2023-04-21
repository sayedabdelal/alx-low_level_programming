#include "variadic_functions.h"

/**
 * sum_them_all - sum var
 * @n: number of arguments
 *
 * Return: intger sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list vaPtr;

	if (!n)
		return (0);
	va_start(vaPtr, n);
	for (i = 0; i < n; i++)
		sum += va_arg(vaPtr, int);

	va_end(vaPtr);

	return (sum);
}
