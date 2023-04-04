#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list.
 * @h: Pointer to the head of the list.
 *
 * Return: The size of the list that was free'd.
 */
size_t free_listint_safe(listint_t **h)
{
    size_t size = 0;
    listint_t *tmp, *curr;

    if (h == NULL || *h == NULL)
        return (0);

    curr = *h;
    while (curr != NULL)
    {
        tmp = curr->next;
        free(curr);
        size++;

        /* Check if the next node has already been freed */
        if (tmp != NULL && (void *)tmp <= (void *)curr)
            break;

        curr = tmp;
    }

    *h = NULL;
    return (size);
}
