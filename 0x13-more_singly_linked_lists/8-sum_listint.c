#include "lists.h"

/**
 * sum_listint - function returns the sum of all the data (n) of
 * linked list.
 * @head: head of a list.
 * Return: sum of all of the data (n).
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
