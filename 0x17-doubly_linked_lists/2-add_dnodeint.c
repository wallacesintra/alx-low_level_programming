#include "lists.h"

/**
 * add_dnodeint - function adds a new node at the beginning
 * of a list
 * @head: head of the list
 * @n: the element to add
 * Return: address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *h;
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}

	newNode->next = h;

	if (h != NULL)
		h->prev = newNode;

	*head = newNode;

	return (newNode);
}
