#include "lists.h"

/**
 * free_listint - A function that frees listint_t list.
 * @head: A pointer to the head of the list_it list.
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
