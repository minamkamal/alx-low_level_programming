#include "lists.h"

/**
 * get_nodeint_at_index - node for index in list
 * @head: first node
 * @index: index of mode
 *
 * Return: ptr, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
