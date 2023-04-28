#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * listint_len - function return number of elements in a linked
 *               list listint_t
 * @h: points to the linked list
 *
 * Return: the total number of elements which are nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = (*h).next;
	}

	return (nodes);
}
