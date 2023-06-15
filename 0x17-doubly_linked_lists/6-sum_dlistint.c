#include "lists.h"

/**
 * sum_dlistint - function returns the sum of the elements
 *                in a linked list
 * @head: points to the head of the linked list
 *
 * Return: 0 if the list is found to be empty
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *p;
	int sum = 0;

	for (p = head ; p != NULL ; p = p->next)
	{
		sum = sum + p->n;
	}

	return (sum);
}
