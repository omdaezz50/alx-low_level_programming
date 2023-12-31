#include "lists.h"

/**
 * print_listint - Prints all elements of linked lists
 * @h: The linked lists of listint_t to print
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)

{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
