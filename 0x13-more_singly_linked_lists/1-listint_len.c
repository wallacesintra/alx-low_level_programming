#include "lists.h"

/**
 * listint_len - returns the no of elements in
 * a linked list.
 * @h: head of the list
 * Return: numbers of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
