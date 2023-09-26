#include "lists.h"

/**
 * free_listint2 - function frees a linked list
 * @head: head of the list.
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((temp = curr) != NULL)
		{
			curr = curr->next;
			free(temp);
		}
		*head = NULL;
	}
}
