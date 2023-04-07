#include "lists.h"

/**
 * free_listint - Function free list
 * @head: pointer
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *my_ptr;

	while (head)
	{
		my_ptr = head;
		head = head->next;
		free(my_ptr);
	}
}
