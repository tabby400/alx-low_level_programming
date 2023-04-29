#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint - a function that frees listint_t list
 *
 * @head: points to the listint_t list to be freed
 *
 */

void free_listint(listint_t *head)
{
	listint_t *p;

	while (head)/*goes on as long as head is not null*/
	{
		p = (*head).next;
		free(head);
		head = p;
	}
}
