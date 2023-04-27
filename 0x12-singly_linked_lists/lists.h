#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct list_s -  the singly linked list
 * @string: the string to create space for
 * @length: the length of entire string
 * @nextnode: shows the next linked node
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
}list_t;

size_t list_len(const list_t *h);
size_t print_list(const list_t *h);
list_t *add_node(list_t **head, const char *str);
int _putchar(char c);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
