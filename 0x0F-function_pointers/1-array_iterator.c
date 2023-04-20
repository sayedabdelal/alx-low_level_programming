#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - maps an array through function as a parameter
 *
 * @array:  int array
 * @size: size of the array
 * @action: pointer to function used
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int id;

	if (!array || !action)
		return;

	for (id = 0; id < size; id++)
		action(array[id]);
}
