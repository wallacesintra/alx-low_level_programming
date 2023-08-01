#include "lists.h"

/**
 * free_listint2 - free a singly linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listint2(listint_t **head)
{
	listint_t *current_node;
	listint_t *temp;
	
	if (head != NULL)
	{
		current_node = *head;
		while ((temp = current_node) != NULL)
		{
			current_node = current_node->next;
			free(temp);
		}
		*head = NULL;
	}
}
