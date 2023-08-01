#include "lists.h"

/**
 * add_nodeint - add node at the beginning of linked list.
 * @head: head of a list.
 * @n: n element.
 * Return: address of the new element. return NULL when it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
