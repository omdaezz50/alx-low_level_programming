#include "lists.h"

/**
 * listint_len - Returns numbers of elem in l lists
 * @h: Linked lists of listint_t to traverse
 * Return: The number of nodes
 */

size_t listint_len(const listint_t *h)

{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}

	return (i);
}
