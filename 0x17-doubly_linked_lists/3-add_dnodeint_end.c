#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end
 *
 * @head: struct of list
 *
 * @n: const number
 *
 * Return: dlistint_t end of list
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp, *tp;

	tmp = malloc(sizeof(dlistint_t));
	if (tmp == NULL)
	{
		return (NULL); /* Check if memory allocation failed */
	}
	tmp->n = n;
	tmp->next = NULL;
	tmp->prev = NULL;

	/* Trevrse list*/
	if (*head == NULL)
	{
		*head = tmp;
		return (*head);
	}
	else
	{
		tp = *head;
		while (tp->next != NULL)
		{
			tp = tp->next;
		}
		/* updata list */
		tp->next = tmp;
		tmp->prev = tp;
	}
	return (tmp);
}
