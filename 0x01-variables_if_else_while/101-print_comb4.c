#include <stdio.h>

/**
 * main - entry point
 *
 * Description : print all possible different combinations of three digits
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int one = 0;
	int two = 0;
	int three = 0;

	while (one < 9)
	{
		two = 0;
		while (two < 9)
		{
			three = 0;
			while (three <= 9)
			{
				if (one != two && one < two && two != three && two < three)
				{
					putchar(one + 48);
					putchar(two + 48);
					putchar(three + 48);
					if (one + two + three != 24)
					{
						putchar(',');
						putchar(' ');
						}
				}
				three++;
			}
			two++;
		}
		one++;
	}
	putchar('\n');
	return (0);
}
