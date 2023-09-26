#include "lists.h"

/**
 * pop_listint -function deletes the head of
 * a linked list
 * @head: head of list.
 * Return: head's data.
 */
int pop_listint(listint_t **head)
{
	int hnode;
	listint_t *h, *curr;
	if (*head == NULL)
		return (0);

	curr = *head;

	hnode = curr->n;

	h = curr->next;

	free(curr);

	*head = h;

	return (hnode);
}
