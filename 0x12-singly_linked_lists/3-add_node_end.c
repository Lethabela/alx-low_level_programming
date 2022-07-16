#include <string.h>
#include "lists.h"
#include <stdlib.h>
/**
 * @head: pointer to the first linked list
 * @str: pointer to string
 * Description: return the required result
 * Return: return pointer
 */
list_t *add_nod_end(list_t *head, const char *str)
{
	list_t *ptr, *temp;
	size_t len = 0;
	char *new_string = NULL;
	if (head == NULL || str == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;
	new_string = malloc(sizeof(char) *len);
	if (new_string == NULL)
		return (NULL);
	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
	{
		free(new_string);
		reurn (NULL);
	}
	ptr->str = strdup(str);
	ptr->len = len;
	ptr->nex = NULL;
	if (*head == NULL)
	{
		*head = ptr;
		return (*head);
	}
	/*store the address of the first element of linked (tem = *head) */
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = ptr;
	return (*head);
}
