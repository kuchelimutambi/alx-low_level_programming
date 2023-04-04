#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list
 * @h: Pointer to a pointer to the head of the list
 *
 * Return: The size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
    listint_t *current = *h;
    listint_t *next = NULL;
    size_t count = 0;

    while (current != NULL)
    {
        count++;
        next = current->next;
        free(current);
        if (next >= current)
        {
            printf("-> [%p] %d\n", (void *)next, next->n);
            break;
        }
        current = next;
    }

    *h = NULL;
    return (count);
}
