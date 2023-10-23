#include "lists.h"
#include <string.h>
/**
* add_nodeint -  adds a new node at the beginning of a listint_t list.
* @head: actual head address of the list
* @n: the number to be added on the head
*
* Return: head of the node
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node = malloc(sizeof(listint_t));

if (new_node == NULL)
{
return (NULL);
}

new_node->n = n;
new_node->next = *head;
*head = new_node;

return (new_node);
}
