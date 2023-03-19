#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main : entry point
 * 
 * Description : prints Last digit of number and compare it
 *
 * Return : 0 (sucesses)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n % 10 > 5)
		printf("%i and is greater than 5\n", n);
	else if (n % 10 == 0)
	       printf("%i and is 0\n", n);
	else
		printf("%i and is less than 6 and not 0\n", n);
	return (0);
}
