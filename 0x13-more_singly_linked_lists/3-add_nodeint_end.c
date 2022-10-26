#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: double pointer to head of list
 * @n: integer to be added
 * Return: address of node added
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *newnode = malloc(sizeof(listint_t));
listint_t *current;

if (!head || !newnode)
return (NULL);
newnode->n = n;
newnode->next = NULL;
if (!*head)
*head = newnode;
else
{
current = *head;
while (current->next)
current = current->next;
current->next = newnode;
}
return (newnode);
}
