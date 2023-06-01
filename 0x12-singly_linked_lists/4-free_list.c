#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a given list
 * @head: the list to be freed
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head;
		free(head->next);
		free(head);
		head = tmp;
	}
}
