#include "lists.h"

/**
 * add_nodeint - adding new nodes at frst of list
 * @head: node head
 * @n: data insert for new node
 *
 * Return:  ptr to node or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
