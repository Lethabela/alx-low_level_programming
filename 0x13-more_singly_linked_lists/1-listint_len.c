#include "lists.h"

/**
 * listint_len - gets the number of nodes in a list
 * @h: linked list to print
 *
 * Return: number of nodes in the list
 *
 */

size_t listint_len(const listint_t *h)

{
	size_t count = 0;

	for (count = 0; h ; count++)
		h = h->next;
	return (count);
}
