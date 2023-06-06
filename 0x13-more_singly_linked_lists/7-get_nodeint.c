#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index in a linked list
 * @head: first node in the linked list
 * @index: index of the node to return
 * Return: pointer to the node looking for
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j = 0;
	listint_t *tep = head;

	while (tep && j < index)
	{
		tep = tep->next;
		j++;
	}
	return (tep ? tep : NULL);
}
