#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint_safe - Frees a listint_t linked list.
 * @h: A pointer to a pointer to the first node of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t free_listint_safe(listint_t **h)
{
    size_t count = 0;
    listint_t *current, *tmp;

    if (h == NULL)
        return (0);

    current = *h;

    while (current != NULL)
    {
        count++;
        if (current < current->next)
        {
            tmp = current;
            current = current->next;
            free(tmp);
        }
        else
        {
            printf("-> [%p] %d\n", (void *)current, current->n);
            free(current);
            *h = NULL;
            break;
        }
    }

    return (count);
}
