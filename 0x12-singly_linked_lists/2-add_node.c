#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a node
 * @head: is the head node
 * @str: string
 * Return: a new node or NULL if it fail
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	if (head != NULL && str != NULL)
	{
		temp = malloc(sizeof(list_t));
		if (temp == NULL)
			return (NULL);
		temp->str = strdup(str);
		temp->len = _strlen(str);
		temp->next = *head;
		*head = temp;
		return (temp);
	}
}

/**
 * _strlen - length of a string
 * @s: The string to count
 *
 * Return: string length
 */

int _strlen(const char *s)
{
	int c = 0;

	while (*s)
	{
		s++;
		c++;
	}

	return (c);
}
