#include "lists.h"
#include <stdio.h>

/**
 * print_listint - a function that prints all elements of
 *                 listint_t list
 * @h: points to the the linked list called listint_t
 *
 * Return: the total number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t allnodes = 0;

	while (h)
	{
		allnodes++;
		printf("%d\n", (*h).n);
		h = (*h).next;
	}

	return (allnodes);
}
