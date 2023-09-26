#include "lists.h"

/**
 * free_listint - function frees a linked list
 * @head: head of the list
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
