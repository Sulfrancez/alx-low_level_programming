#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: double pointer to head of list
 * @idx: index to add new node
 * @n: value at new node
 * Return: address of new node, or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *current;
listint_t *newnode;

register uint i;

newnode = malloc(sizeof(listint_t));
if (!head || !newnode)
return (NULL);
newnode->n = n;
if (!idx)
{
newnode->next = *head;
*head = newnode;
return (newnode);
}
current = *head;
while (current)
{
if (i == idx - 1)
{
newnode->next = current->next;
current->next = newnode;
return (newnode);
}
i++;
current = current->next;
}
free(newnode);
return (NULL);
}
