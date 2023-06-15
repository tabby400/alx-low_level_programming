#include "lists.h"

/**
 * add_dnodeint - function used to add a node at the start of a
 *                  linked list
 * @n: the element to be added
 * @head: points to the head of the list
 *
 * Return: the new elements' address otherwise NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *added;

	added = malloc(sizeof(dlistint_t));/*create space*/

	if (!added)
	{
		return (NULL);
	}

	added->n = n;
	added->next = *head;
	added->prev = NULL; /*first node*/
	if (*head != NULL)
	{
		(*head)->prev = added;
	}
	*head = added;
	return (added);
}
