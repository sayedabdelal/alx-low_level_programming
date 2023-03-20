#include <stdio.h>

/**
 * main - entry point
 *
 * Description : print all revers alphabet in lowercase
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	 int i, j;
	 int n1, n2, n3, n4;

	for (i = 0; i <= 99; i++)
	{
		for (j = 0; j <= 99; j++)
		{
			if (i < j)
			{
				n1 = i / 10;
				n2 = i % 10;
				n3 = j / 10;
				n4 = j % 10;
				putchar(n1 + '0');
				putchar(n2 + '0');
				putchar(' ');
				putchar(n3 + '0');
				putchar(n4 + '0');
				if (i != 98 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}

