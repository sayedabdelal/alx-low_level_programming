#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - print all the elements of a dlistint_t list
 * @h: pointer to the start list
 *
 * Return: lenth of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *tmp = h;
	int count = 0;

	while (tmp != 0)
	{
		printf("%d\n", tmp->n);
		count++;
		tmp = tmp->next;
	}
	return (count);
}
