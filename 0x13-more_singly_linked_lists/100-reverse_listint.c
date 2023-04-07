#include "lists.h"

/**
 * reverse_listint - Funtion Reverse the list
 * By Tajudeen Lukmon
 * @head: head of linked list
 *
 * Return: list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *my_start = NULL, *next;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = my_start;
		my_start = *head;
		*head = next;
	}
	*head = my_start;
	return (*head);
}
