#include "lists.h"

/**
 * print_dlistint - a function that is able to print the
 *                 elements in dlistint list
 * @h: points to the head of the linked list
 *
 * Return: the total number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int nodecount = 0;

	if (!h)
	{
		return (nodecount);
	}

	while (h->prev != NULL) /*to get to first node*/
		h = h->prev;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodecount++;
	}
	return (nodecount);
}
