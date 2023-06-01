#include "lists.h"

/**
 * list_len - computes the length of a linked list
 * @h: input list
 *
 * Return: number of elements in list h
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}

	return (len);
}
