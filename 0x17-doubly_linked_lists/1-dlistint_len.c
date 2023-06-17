#include "lists.h"

/**
 * dlistint_len - count the number of nodes
 * @h: pointer to the beginning of a linked list
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *tmp = h;
	int count = 0;

	while (tmp != 0)
	{
		count++;
		tmp = tmp->next;
	}
	return (count);
}
