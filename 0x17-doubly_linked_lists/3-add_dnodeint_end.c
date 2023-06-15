#include "lists.h"

/**
 * add_dnodeint_end - function adds a node at the end of the list
 *
 * @n: the element to be added
 * @head: points to the head of the list
 *
 * Return: the added element address otherwise NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *add_end;

	add_end = malloc(sizeof(dlistint_t));
	if (!add_end)
	{
		return (NULL);
	}
	add_end->n = n;
	add_end->next = NULL; /*aded at the end*/

	if (!*head)
	{
		add_end->prev = NULL;
		*head = add_end;
		return (add_end);
	}

	while ((*head)->next != NULL)
		*head = (*head)->next;

	(*head)->next = add_end;
	add_end->prev = *head; /*the prev is first node*/

	return (add_end);
}
