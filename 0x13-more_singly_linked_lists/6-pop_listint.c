#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: Pointer to the pointer to the head the list
 *
 * Return: The data (int) of the deleted head node, or 0 if thelist is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (head == NULL || *head == NULL)
		return (0);

	temp = *head;
	data = temp->n;
	*head = temp->next;
	free(temp);

	return (data);
}
