#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list safely.
 * @h: A pointer to a pointer to the head of the list.
 * Return: The size of the list that was freed.
 */

size_t free_listint_safe(listint_t **h)
{
listint_t *current, *next;
size_t size = 0;

if (h == NULL || *h == NULL)
return (0);

current = *h;

while (current != NULL)
{
size++;
next = current->next;

current->next = NULL;

free(current);

current = next;
}

*h = NULL;
return (size);
}
