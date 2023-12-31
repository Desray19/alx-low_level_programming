#include <stdio.h>
#include "lists.h"
/**
 * print_listint -  that prints all the elements of a listint_t list.
 * @h: head of the node
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t nodes = 0;

	while (h != NULL)
	{
	printf("%d\n", h->n);
	nodes++;
	h = h->next;
	}

	return (nodes);
}
