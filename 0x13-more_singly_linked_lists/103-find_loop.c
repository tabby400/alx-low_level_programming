#include <stdio.h>
#include "lists.h"

/**
 * find_listint_loop - function which helps in finding
 *        a loop in a linked list
 *
 * @head: points to the head of the linked list
 *
 * Return: the address of the node where loop is starting
 * otherwise NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *snail;
	listint_t *cricket;

	if (!head && !head->next)
	{
		return (NULL);
	}
	snail = head->next;
	cricket = (head->next)->next;

	while (cricket)
	{
		if (snail == cricket)
		{
			snail = head;

			while (snail != cricket)
			{
				snail = snail->next;
				cricket = cricket->next;
			}
			return (snail);
		}
		snail = snail->next;
		cricket = (cricket->next)->next;

	}
	return (NULL);
}
