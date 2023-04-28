#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to the head of the list
 * @str: string to be added to the list
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *last_node;

	if (head == NULL || str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));

	if (str)
	{
		new_node->str = strdup(str);
		if (new_node->str == NULL)
		{
			free(new_node);
			return (NULL);
		}
		new_node->len = _strlen(new_node->str);
		new_node->next = NULL;
	}
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	last_node = *head;
	while (last_node->next != NULL)
		last_node = last_node->next;
	last_node->next = new_node;

	return (new_node);
}
