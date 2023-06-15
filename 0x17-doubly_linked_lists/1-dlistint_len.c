#include "lists.h"

/**
 * dlistint_len - function used to return the number of
 *                    elements in a linked list
 * @h: points to the head of dlistint_t
 *
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	int total = 0;

	if (!h)
	{
		return (total);
	}

	while (h)
	{
		h = h->next;
		total++;
	}

	return (total);
}
