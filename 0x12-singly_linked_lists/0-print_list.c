#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - Print all the elements of a linked list
 * @h: - The head node of the list to print
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t m = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		m += 1;
	}
	return (m);
}
