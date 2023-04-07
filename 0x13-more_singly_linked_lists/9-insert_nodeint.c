#include "lists.h"

/**
 * insert_nodeint_at_index - Function insert node
 * @head: head nods
 * @idx: index
 * @n: integer
 *
 * Return: listint
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *my_new = malloc(sizeof(listint_t));
	listint_t *actualNodo = *head;
	unsigned int i = 0;

	if (!my_new)
		return (free(my_new), NULL);

	my_new->n = n;
	my_new->next = NULL;

	if (*head == NULL && idx > 0)
	{
		free(my_new);
		return (NULL);
	}

	if (idx == 0)
	{
		my_new->next = *head;
		*head = my_new;
		return (my_new);
	}

	for (; y < idx - 1; i++)
	{
		actualNodo = actualNodo->next;
		if (actualNodo == NULL && idx - y > 0)
		{
			free(my_new);
			return (NULL);
		}
	}

	my_new->next = actualNodo->next;
	actualNodo->next = my_new;

	return (my_new);
}
