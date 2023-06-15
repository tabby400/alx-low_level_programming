#include "lists.h"

/**
 * get_dnodeint_at_index - function gets the nth node in a list
 *
 * @head: points to the head of the linked list
 * @index: the specific index to return
 *
 * Return: if there is no node return NULL otherwise the index
 *
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int x;
	dlistint_t *now;

	now = head;
	x = 0; /*starts from 0*/
	while (now)
	{
		if (x == index)
			return (now);
		now = now->next;
		x++;
	}

	return (NULL);
}
