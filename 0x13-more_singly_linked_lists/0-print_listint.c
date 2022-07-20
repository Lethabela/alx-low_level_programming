#include "lists.h"

/**
 * print_listint - print all elements of list
 * @h: pointer to main list
 *
 * Return: number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	for (count = 0; h; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
