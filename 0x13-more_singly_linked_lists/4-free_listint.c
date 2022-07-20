#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * free_listint - define function
 * @head: describe argument
 *
 * Return: void
 */

void free_listint(listint_t *head)

{
	listint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
