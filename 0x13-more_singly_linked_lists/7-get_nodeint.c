#include "lists.h"

/**
 * get_nodeint_at_index - Function return nth of the list
 * @head: head nodos
 * @index: index of the nodo
 * Return: list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *my_new = head;
	unsigned int y;

	if (!head)
		return (0);
	for (y = 0; my_new; y++)
	{
		if (y == index)
			return (my_new);
		my_new = my_new->next;
	}
	return (NULL);
}
