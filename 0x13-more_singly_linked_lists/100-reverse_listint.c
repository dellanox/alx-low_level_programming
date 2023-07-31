#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: Pointer to the pointer of the head of the list.
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	if (head == NULL || *head == NULL || (*head)->next == NULL)
		return *head;

	listint_t *prev = NULL;
	listint_t *current = *head;
	listint_t *next;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}

	*head = prev;
	return *head;
}

/**
 * print_listint - Prints a listint_t linked list.
 * @head: Pointer to the head of the list.
 */
void print_listint(const listint_t *head)
{
	const listint_t *current = head;

	while (current != NULL)
	{
		printf("%d", current->n);
		if (current->next != NULL)
			printf(" -> ");
		current = current->next;
	}
	printf("\n");
}

/**
 * free_listint - Frees a listint_t linked list.
 * @head: Pointer to the head of the list.
 */
void free_listint(listint_t *head)
{
	listint_t *current = head;
	listint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
