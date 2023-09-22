#ifndef LIST_H
#define LIST_H


#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct list_s - singly linked list node
 * @str: string of the malloc
 * @len: length of the string
 * @next: this points to the next node
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

void free_list(list_t *head);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void __attribute__((constructor)) prnt_msg();

#endif /* LIST_H */
