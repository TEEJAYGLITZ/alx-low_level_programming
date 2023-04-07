#include "lists.h"

/**
 * find_listint_loop - Funcion dada
 * By Tajudeen
 * @head: Desde main
 *
 * Return: my_slow_p
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *my_slow_p = head, *my_fast_p = head;

	while (my_slow_p && my_fast_p && my_fast_p->next)
	{
		my_slow_p = my_slow_p->next;
		my_fast_p = my_fast_p->next->next;
		if (my_slow_p == my_fast_p)
		{
			my_slow_p = head;
			while (my_slow_p != my_fast_p)
			{
				my_slow_p = my_slow_p->next;
				my_fast_p = my_fast_p->next;
			}
			return (my_slow_p);
		}
	}
	return (NULL);
}
