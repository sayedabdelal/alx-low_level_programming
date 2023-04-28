#include "lists.h"
/**
 * list_len - return num of ele in linked_list
 * @h: pointer to frist node
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t l = 0;

	while (h != NULL)
	{
		l++;
		h = h->next;
	}
	return (l);
}
