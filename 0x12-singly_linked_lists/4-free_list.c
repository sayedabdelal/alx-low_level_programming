#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to the head of the list
 */
void free_list(list_t *head)
{
	list_t *next_node;

	while (!head)
	{
		next_node = head;
		head = head->next;
		free(next_node->str);
		free(next_node);
	}
}
