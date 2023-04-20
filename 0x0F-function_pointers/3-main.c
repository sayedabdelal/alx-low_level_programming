#include "3-calc.h"

/**
 * main - program that perfroms simple operations
 * @argc: number of arguments
 * @argv: array of argument vector
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int a1, a2, result;
	char o;
	int (*op_func)(int, int);

	if (argc != 4)
		printf("Error\n"), exit(98);

	a1 = atoi(argv[1]);
	a2 = atoi(argv[3]);

	op_func = get_op_func(argv[2]);

	if (!op_func)
	{
		printf("Error\n");
		exit(99);
	}

	o = argv[2][0];

	if ((o == '/' || o == '%') && a2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = op_func(a1, a2);

	printf("%d\n", result);

	return (0);
}
