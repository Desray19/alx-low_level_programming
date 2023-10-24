#include "lists.h"
/**
* pop_listint - removes first elt from list
* @head: actual head of list
*
* Return: 0 if empty, otherwise data of the elt removed
*/
int pop_listint(listint_t **head)
{
int v = 0;
listint_t *tmp;
if (*head == NULL || head == NULL)
{
return (v);
}
tmp = *head;
v = tmp->n;
*head = (*head)->next;
free(tmp);

return (v);
}
