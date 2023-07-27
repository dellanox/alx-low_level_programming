#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: Double pointer to the head of the list.
 * @str: String to be duplicated and added as the new node's str.
 * Return: The address of the new element (new node), or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *temp;
	unsigned int len = 0;

	/* Calculate the length of the string */
	while (str && str[len])
		len++;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	/* Duplicate the string */
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	/* Set the length of the new node */
	new_node->len = len;

	/* If the list is empty, make the new node the head */
	if (*head == NULL)
	{
		*head = new_node;
		new_node->next = NULL;
		return (new_node);
	}

	/* Traverse to the end of the list */
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;

	/* Append the new node at the end */
	temp->next = new_node;
	new_node->next = NULL;

	return (new_node);
}
