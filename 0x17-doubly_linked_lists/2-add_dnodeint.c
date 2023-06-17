#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning
 *
 * @head: head of list
 *
 * @n: Value
 *
 * Return: dlistint_t of new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp = malloc(sizeof(dlistint_t));

	if (tmp == NULL)
	{
		return (NULL); /* Check if memory allocation failed */
	}

	tmp->n = n;
	tmp->next = *head;
	tmp->prev = NULL;

	if (*head != NULL)
	{
		(*head)->prev = tmp;
	}
	*head = tmp;

	return (tmp);
}
