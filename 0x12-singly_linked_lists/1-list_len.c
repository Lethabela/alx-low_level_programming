#include "lists.h"
#include <stdlib.h>
/**
 * list_len - return the lenght of the element in linked list
 * @h: address of the first linked list
 *
 * Description: return the required results
 * Return: return the length
 */
size_t list_len(const list_t *h)
{
	const list_t *ptr = NULL;
	size_t len = 0;

	if (h == NULL)
		return (0);

	ptr = h;
	while (ptr != NULL)
	{
		len++;
		ptr = ptr->next;
	}
	return (len);
}
