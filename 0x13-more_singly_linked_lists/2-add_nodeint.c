#include "lists.h"
/**
 * add_nodeint - Function adds new nodes
 * By Tajudeen Lukmon
 * @head: pointer
 * @n: integer
 * Return: the list whit the new nodo
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *my_new = malloc(sizeof(listint_t));


	if (!my_new)
		return (NULL);
	my_new->n = n;
	my_new->next = *head;
	*head = my_new;

	return (*head);
}
