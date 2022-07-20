#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Frees a list and sets its head to NULL
 * @head: double pointer to head of list
 */
void free_listint2(listint_t **head)

{
	listint_t *next;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
	}
}
