#include <stdio.h>

/**
 * main - finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2
 * followed by a new line
 * Return: ALways 0 (Success)
*/

int main(void)
{
	int count;
	long fib1 = 0, fib2 = 1, sum;

	for (count = 0; count < 99; count++)
	{
		sum = fib1 + fib2;
		printf("%lu, ", sum);
		fib1 = fib2;
		fib2 = sum;
	}
	printf("\n");
	return (0);
}
