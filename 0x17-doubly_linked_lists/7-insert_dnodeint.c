#include "lists.h"

/**
 * insert_dnodeint_at_index - function used to insert a node
 *                              at a given position
 * @idx: represents the positi0on to add the new node
 * @n: the element to be contained in the new node
 * @h: points to the head of the linked list
 *
 * Return: the adddress of the added node, otherwise NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *added;
	dlistint_t *cpy = *h;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	for (; idx != 1 ; idx--)
	{
		cpy = cpy->next;
		if (cpy == NULL)
			return (NULL);
	}

	if (!cpy->next)
	{
		return (add_dnodeint_end(h, n));
	}

	added = malloc(sizeof(dlistint_t));
	if (added == NULL)
		return (NULL);

	added->n = n;
	added->prev = cpy;
	added->next = cpy->next;
	cpy->next->prev = added;
	cpy->next = added;

	return (added);
}
