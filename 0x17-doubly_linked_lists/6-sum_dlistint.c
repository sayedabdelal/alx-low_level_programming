#include "lists.h"

/**
 * sum_dlistint - sums all of the data of list
 * @head: pointer to the beginning of the linked list
 *
 * Return: sum of all data, or 0
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;
	int sum = 0;

	ptr = head;
	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
