#include <stdlib.h>
#include "lists.h"
/**
* free_listint - frees a listint_t list.
* @head: head address of the list
*
*/
void free_listint(listint_t *head)
{
listint_t *tmp;

while (head != NULL)
{
tmp = head;
head = head->next;
free(tmp);
}

head = NULL;
}
