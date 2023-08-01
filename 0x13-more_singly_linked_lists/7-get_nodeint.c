#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of singly linked list
 * @head: head of a list.
 * @index: index of the node.
 * Return: nth node.NULL if node does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x;

	for (x = 0; i < index && head != NULL; x++)
	{
		head = head->next;
	}

	return (head);
}
