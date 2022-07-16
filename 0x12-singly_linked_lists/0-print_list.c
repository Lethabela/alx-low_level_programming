#include <stdlib.h>
#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_list -print out the values of a linkec list
 * @h: pointer to the first linked list
 *
 * Description: print the required value
 *
 * Return: return the inter value
 *
 */
size_t print_list(const list_t *h)
{
	const list_t *tmp;
	unsigned int i;

	tmp = h;
	for (i = 0; tmp; i++)
	{
		printf("[%u] %s\n", tmp->len, tmp->str);
		tmp = tmp->next;
	}
	return (i);

}
