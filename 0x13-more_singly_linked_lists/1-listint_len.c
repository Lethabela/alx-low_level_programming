#include "lists.h"

/**
 *
 * listint_len - gets the number of nodes in a list
 * @h: linked list to print
 *
 * Return: number of nodes in the list
 *
 */

size_t listint_len(const listint_t *h)

{
	int count = 0;
	
	while (h != 0)
	{
		h = h->next;
		count++
	}
	return(count);
}
