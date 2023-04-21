#include "variadic_functions.h"

/**
 * print_strings - prints strings with seprator
 * @separator: string seprator
 * @n: number of arguments
 * @...: the string to print
 *
 * return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	va_list vaPtr;
	if(!n)
	{
		printf("\n");
		return;
	}
	va_start(vaPtr, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(vaPtr, char *);
		if (!str)
			str = "(nil)";
		if (!separator)
			printf("%s", str);
		else if (separator && i == 0)
			printf("%s", str);
		else
			printf("%s%s", separator, str);
	}
	printf("\n");

	va_end(vaPtr);
}
