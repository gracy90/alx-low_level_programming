#include "lists.h"

/**
 * add_nodeint - adds a new node to the beginnig of a linked list
 * @head: the pointer to the first node
 * @n: a data to insert in new node
 * Return: pointer of the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
