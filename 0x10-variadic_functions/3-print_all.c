#include "variadic_functions.h"

/**
 * print_all - prints anything.
 * @format: list of arguments passed to the function.
 *
 * Return: no return.
 *
*/
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *sep = "";

	va_list li;

	va_start(li, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(li, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(li, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(li, double));
					break;
				case 's':
					str = va_arg(li, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(li);
}
