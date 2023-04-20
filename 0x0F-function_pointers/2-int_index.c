#include "function_pointers.h"

/**
 * int_index - search for an integer
 * @array: int of  array
 * @size: size of the array
 * @cmp: the compare of function
 *
 * Return: the intger index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && cmp && size)
	{
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	}
	return (-1);
}
