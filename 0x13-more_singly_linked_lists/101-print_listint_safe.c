#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: Pointer to the head of the linked list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow, *fast;
	size_t node_count = 0;

	slow = head;
	fast = head;

	while (fast != NULL && fast->next != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		node_count++;

		slow = slow->next;
		fast = fast->next->next;

		/* Check if the list has a loop */
		if (slow == fast)
		{
			/* Reset slow pointer to head and move both pointers at same pace */
			slow = head;
			while (slow != fast)
			{
				printf("[%p] %d\n", (void *)slow, slow->n);
				node_count++;

				slow = slow->next;
				fast = fast->next;
			}

			printf("-> [%p] %d\n", (void *)slow, slow->n);
			node_count++;
			exit(98); /* Exit with status 98 if a loop is detected */
		}
	}

	/* Print the last node if the list doesn't have a loop */
	while (slow != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		node_count++;
		slow = slow->next;
	}

	return (node_count);
}

