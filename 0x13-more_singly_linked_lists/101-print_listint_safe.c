#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow = head;
	const listint_t *fast = head;
	size_t count = 0;

	while (fast != NULL && fast->next != NULL)
	{
	printf("[%p] %d\n", (void *)slow, slow->n);
	slow = slow->next;
	fast = fast->next->next;

	count++;
	if (slow == fast)
	{
		printf("-> [%p] %d\n", (void *)slow, slow->n);
		break;
	}
	}

	if (fast == NULL ||
	    fast->next == NULL)
	{
	const listint_t *temp = slow;

	while (slow != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);

		slow = slow->next;
		free((void *)temp);
		count++;
	}
	}
	else
	{
	const listint_t *temp = slow;

	slow = head;
	while (slow != fast)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);

		slow = slow->next;
		free((void *)temp);
		count++;
	}
	
	printf("[%p] %d\n", (void *)slow, slow->n);
	slow = slow->next;
	while (slow != fast)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		slow = slow->next;
		free((void *)temp);
		count++;
	}
	printf("-> [%p] %d\n", (void *)slow, slow->n);
	}

	return (count);
}
