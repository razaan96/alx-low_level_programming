#ifndef _LISTS_H_
#define _LISTS_H_

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * struct list_s - singly linked list
 * @next: pointer to the next node
 * @len: length of string
 * @str: string (malloced string)
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);

#endif
