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
	unsigned long fib1 = 0, fib2 = 1, sum;
       	double total_sum;

	for (count = 0; count < 33; count++)
	{
		sum = fib1 + fib2;

		if (sum < 4000000 && (sum % 2) == 0)
			total_sum += sum;
		fib1 = fib2;
		fib2 = sum;
	}
	printf("%.0lf\n", total_sum);
	return (0);
}
