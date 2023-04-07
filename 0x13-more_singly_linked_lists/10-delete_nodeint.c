#include "lists.h"

/**
 * delete_nodeint_at_index - Function that delete a node
 * By Tajudeen
 * @head: nodo head
 * @index: index
 * Return: integer
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int y = 0;
	listint_t *actual = *head;
	listint_t *my_nodo;

	if (!*head)
		return (-1);
	if (index == 0)
	{
		my_nodo = *head;
		*head = (*head)->next;
		free(actual);
		return (1);
	}
	while (actual)
	{
		if (y  == index - 1)
		{
			my_nodo = actual->next;
			actual->next = my_nodo->next;
			free(my_nodo);
			return (1);
		}
		actual = actual->next, y++;
	}
	return (-1);
}
