#include "lists.h"

/**
 * add_nodient_end - A function that add new node at the end
 * of list.
 * @head: A pointer
 * @n: Node data.
 *
 * Return: NULL if the function fails. Otherwise - the address of the element.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *last;

	newnode = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
		*head = newnode;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (*head);
}
