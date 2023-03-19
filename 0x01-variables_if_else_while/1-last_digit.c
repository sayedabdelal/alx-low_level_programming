#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - entry point
 *
 * Description : prints The Last Value and compare it .
 *
 * Return : Always 0 (success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n % 10 > 5)
		printf("%d and is greater than 5\n", n);
	else if (n % 10 == 0)
		printf("%d and is 0\n", n);
	else
		printf("Last digit of %d is greater than 5\n", n);
	return (0);
}
