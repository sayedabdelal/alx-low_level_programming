#include "lists.h"

/**
 * get_dnodeint_at_index - the node located at a specific position
 *
 * @head: pointer to head node
 *
 * @index: int of strat
 *
 * Return: dlistint_t
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		if (count == index)
		return (current);

		current = current->next;
		count++;
	}

	return (NULL);/* Index out of range*/
}
