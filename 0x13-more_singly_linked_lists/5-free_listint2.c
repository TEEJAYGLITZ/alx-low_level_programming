#include "lists.h"

/**
 * free_listint2 - Funtions that free a list head = NULL
 * By Lukmon
 * @head: pointer
 *
 *Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *my_tmp;

	if (!head)
		return;
	while (*head)
	{
		my_tmp = *head;
		*head = (*head)->next;
		free(my_tmp);
	}
	*head = NULL;
}
