#include "lists.h"

/**
 * listint_len - Function return length
 * By Tajudeen Lukmon
 * @h: pointer
 *
 * Return: size_t leng of the list
 */
size_t listint_len(const listint_t *h)
{
	size_t y = 0;

	while (h)
		h = h->next, y++;
	return (y);
}
