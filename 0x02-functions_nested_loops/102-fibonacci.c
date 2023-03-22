#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * followed by a new line
 * Return: Always 0 (Success)
*/

#include <stdio.h>

int main(void)
{
	int count;
	unsigned long fib1 = 1, fib2 = 0, sum;

	for (count = fib1; count <= 49; count++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);
		fib1 = fib2;
		fib2 = sum;
		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}
}
