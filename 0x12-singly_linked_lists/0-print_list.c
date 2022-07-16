#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
/**
 * print_list -print out the values of a linkec list
 * @h: pointer to the first linked list
 * Description: print the required value
 * Return: return the inter value
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *ptr = NULL;

	if (h == NULL)
		return (0);
	ptr = h;
	while (ptr != NULL)
	{
		if (ptr->str == NULL)
		{
			printf("[%u] %s\n", 0, "(nil)");
			free(ptr->str);
		} else
		{
			print("[%u] %s\n", ptr->len, ptr->str);
		}
		ptr = ptr->next;
		count++;
	}
	return (count);
}
