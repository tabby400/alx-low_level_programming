#include <stdio.h>
#include "lists.h"

/**
 * list_len - function returns the number of elements in
 *           a linked list_t list
 * @h: points to the list_t entire list
 *
 * Return: the total number of elements in the list_t list
 */

size_t list_len(const list_t *h)
{
	size_t elments = 0;

	while (h)
	{
		elments++;
		h = (*h).next;
	}
	return (elments);
}
