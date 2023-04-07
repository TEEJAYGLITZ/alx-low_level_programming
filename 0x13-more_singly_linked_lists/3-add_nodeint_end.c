#include "lists.h"

/**
 * add_nodeint_end - Function add node at the end
 * By Tajudeen Lukmon
 * @head: pointer to struct
 * @n: number
 *
 * Return: list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *my_new = malloc(sizeof(listint_t)), *my_last = *head;

	if (!my_new)
		return (NULL);
	my_new->n = n;
	my_new->next = NULL;
	if (!(*head))
	{
		*head = my_new;
	}
	else
	{
		while (my_last->next)
			my_last = my_last->next;
		my_last->next = my_new;
	}
	return (*head);
}
