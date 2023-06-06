#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int zee;
	listint_t *tep;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		zee = *h - (*h)->next;
		if (zee > 0)
		{
			tep = (*h)->next;
			free(*h);
			*h = tep;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}

	*h = NULL;
	return (len);
}
