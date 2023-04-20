#include "3-calc.h"

/**
 * get_op_func - return a pointer to right of functo
 * @s: the operator string
 *
 * Return: the right funtion to pointer
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 5)
	{
		if (s && s[0] == ops[i].opp[0] && !s[1])
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
