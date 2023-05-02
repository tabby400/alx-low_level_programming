#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_lengthloop - gives back the number of nodes in the linked
 * list
 *
 * @head: points to the head of linked list
 *
 * Return: the nodes in the list, otherwise 0.
 */

size_t listint_lengthloop(const listint_t *head)
{
	size_t nds = 1;
	const listint_t *snail;
	const listint_t *cricket;

	if (!head || !head->next)
	{
		return (0);
	}

	snail = head->next;/*goea one node to another*/
	cricket = (head->next)->next;/*goes twice as fast*/

	while (cricket)
	{
		if (snail == cricket)
		{
			snail = head;/*to bring snail to the start of list*/

			while (snail != cricket)
			{
				nds++;
				snail = snail->next;
				cricket = cricket->next;
			}

			snail = snail->next;

			while (snail != cricket)
			{
				nds++;
				snail = snail->next;
			}

			return (nds);

		}
		snail = snail->next;
		cricket = (cricket->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - a function that prints listint_t list
 *
 * @head: points to the head in listint_t
 *
 * Return: the nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nds;
	size_t index = 0;

	nds = listint_lengthloop(head);

	if (nds == 0)
	{
		for (nds = 0 ; head != NULL ; nds++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (index = 0; index < nds; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);

	}
	return (nds);

}
