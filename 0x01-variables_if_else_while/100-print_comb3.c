#include <stdio.h>

/**
 * main - entry point
 *
 * Description : print  all possible different combinations of two digits.
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int one = 1;
	int two = 0;

	while (two < 9)
	{
		one = 0;
		while (one <= 9)
		{
			if (one != two && two < one)
			{
				putchar(two + 48);
				putchar(one + 48);
				if (one + two != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			one++;
		}
		two++;
	}
	putchar('\n');
	return (0);
}
