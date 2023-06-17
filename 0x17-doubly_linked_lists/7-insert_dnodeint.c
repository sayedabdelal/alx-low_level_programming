#include "lists.h"

/**
 * insert_dnodeint_at_index - Add node at spesfic postion
 *
 * @h: Head
 *
 * @idx: index
 *
 * @n: struct int
 *
 * Return: dlistint_t
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newP, *tmp, *tmp2;

	newP = malloc(sizeof(dlistint_t));
	if (newP == NULL)
	{
		return (NULL); /*Check if memory allocation failed */
	}
	newP->n = n;
	newP->next = NULL;
	newP->prev = NULL;
	if (idx == 0)
	{
		newP->next = *h;
		if (*h != NULL)
		{
			(*h)->prev = newP;
		}
		*h = newP;
		return (newP);
	}
	tmp = *h;
	while (idx != 1 && tmp != NULL)
	{
		tmp = tmp->next;
		idx--;
	}
	if (tmp == NULL)
	{
		free(newP);
		return (NULL);
	}
	newP->next = tmp->next;
	if (tmp->next != NULL)
	{
		tmp->next->prev = newP;
	}
	tmp->next = newP;
	newP->prev = tmp;

	return (newP);
}
