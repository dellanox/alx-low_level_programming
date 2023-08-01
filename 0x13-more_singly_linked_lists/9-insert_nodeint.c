#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list.
 * @head: Pointer to the pointer of the head of the list.
 * @n: The value to be stored in the new node.
 *
 * Return: The address of the new node (listint_t), or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 * in the list.
 * @head: Pointer to the pointer of the head of the list.
 * @idx: Index where the new node should be added (starting from 0).
 * @n: The value to be stored in the new node.
 *
 * Return: The address of the new node (listint_t), or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *prev_node;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	if (idx == 0)
		return add_nodeint(head, n);

	prev_node = *head;

	while (prev_node != NULL && count < idx - 1)
	{
		prev_node = prev_node->next;
		count++;
	}

	if (prev_node == NULL || prev_node->next == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = prev_node->next;
	prev_node->next = new_node;

	return (new_node);
}
