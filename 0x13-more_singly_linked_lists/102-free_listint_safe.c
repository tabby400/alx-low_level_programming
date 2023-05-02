#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - function which frees the linked list
 *
 * @h: points to the head of the list
 *
 * Return: the size of the list that was freed
 */

size_t free_listint_safe(listint_t **h)
{
	size_t nds;
	size_t ind;
	listint_t *now;

	nds = listint_lengthloop(*h);

	if (nds == 0)
	{
		for (nds = 0 ; h != NULL && *h != NULL ; nds++)
		{
			now = (*h)->next;
			free(*h);
			*h = now;
		}
	}
	else
	{
		for (ind = 0 ; ind < nds ; ind++)
		{
			now = (*h)->next;
			free(*h);
			*h = now;
		}
		*h = NULL;

	}
	h = NULL;
	return (nds);
}
