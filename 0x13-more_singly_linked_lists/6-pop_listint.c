#include "lists.h"

/**
 * pop_listint - Function that deletes the head nodo
 * @head: head nodo
 * By Tajudeen
 * Return: head node’s data
 */
int pop_listint(listint_t **head)
{
	listint_t *new = *head;
	int my_num;

	if (!*head)
		return (0);

	my_num = (*head)->n;
	*head = new->next;
	free(new);
	return (my_num);
}
