#include "variadic_functions.h"

/**
 * print_numbers - prints numbers with seprator
 * @separator: string seprator
 * @n: number of argumrnt
 * @... : the intger to print
 *
 * return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list vaPtr;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(vaPtr, n);
	for (i = 0; i < n; i++)
	{
		if (!separator)
			printf("%d", va_arg(vaPtr, int));
		else if (separator && i == 0)
			printf("%d", va_arg(vaPtr, int));
		else
			printf("%s%d", separator, va_arg(vaPtr, int));
	}
	va_end(vaPtr);

	printf("\n");
}
