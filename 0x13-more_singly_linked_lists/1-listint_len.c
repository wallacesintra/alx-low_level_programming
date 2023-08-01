#include "lists.h"

/**
 * listint_len - print number of elements in linked list.
 * @h: head of list.
 *
 * Return: numbers of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t no = 0;

	while (h != NULL)
	{
		h = h->next;
		no++;
	}
	return (no);
}
