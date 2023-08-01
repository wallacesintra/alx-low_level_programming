#include "lists.h"

/**
 * pop_listint - deletes the head node of linked list
 * @head: head of a list.
 * Return: head data.
 */
int pop_listint(listint_t **head)
{
	int head_node;
	listint_t *h;
	listint_t *current;

	if (*head == NULL)
		return (0);

	current = *head;

	head_node = current->n;

	h = current->next;

	free(current);

	*head = h;

	return (head_node);
}
