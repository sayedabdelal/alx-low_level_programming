#include "lists.h"

/**
 * _strlen - calc length of string
 * @s: check string
 * Return: int of len
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	for (i = 0; s[i]!= '\0'; i++)
		;
	return (i);
}
/**
 * print_list - print a linked list
 * @h: pointer to frist code
 *
 * Return: num of nodes
 */
size_t print_list(const list_t *h)
{
	size_t j = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		j++;
	}
	return (j);
}
