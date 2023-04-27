#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_list - function that frees a list_t list
 *
 * @head: points to the list list_t
 *
 */

void free_list(list_t *head)
{
	list_t *lisp;

	while (head)
	{
		lisp = head->next;/*lisp points to next node */
		free(head->str);
		free(head);
		head = lisp;
	}

}
