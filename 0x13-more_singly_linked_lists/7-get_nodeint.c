#include "lists.h"
/**
* get_nodeint_at_index - gets elt from list at index
* @head: pointer to head of list
* @index: index of node starting from 0
*
* Return: NULL if node not found, otherwise pointer to node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int o = 0;
listint_t *tmp = head;
if (head == NULL)
{
return (NULL);
}
while (tmp != NULL)
{
if (o == index)
{
return (tmp);
}
tmp = tmp->next;
o++;
}
return (NULL);
}
