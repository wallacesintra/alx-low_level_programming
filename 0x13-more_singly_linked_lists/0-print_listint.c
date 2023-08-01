#include "lists.h"

/**
 * print_listint - prints the elements of a list.
 * @h: head of a list.
 *
 * Return: numbers of nodes in the list.
 */
size_t print_listint(const listint_t *h)
{
	size_t no = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		no++;
	}
	return (no);
}
