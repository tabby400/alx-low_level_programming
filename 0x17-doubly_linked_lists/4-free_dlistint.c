#include "lists.h"

/**
 * free_dlistint - a function that frees a dlistint_t list
 *
 * @head: points to the head of the list
 *
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	while (head)
	{
		dlistint_t *linked = head->next;

		free(head);
		head = linked; /*goes to next item*/
	}
}
