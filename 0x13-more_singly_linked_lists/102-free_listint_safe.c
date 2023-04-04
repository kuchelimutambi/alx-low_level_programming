#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

int main(void)
{
    listint_t *head, *head2;
    size_t n, i;

    head = NULL;
    for (i = 0; i < 10; i++)
        add_nodeint(&head, i);

    n = print_listint_safe(head);
    printf("Number of nodes in the list = %lu\n", n);

    /* Free the list */
    free_listint_safe(&head);

    /* Test with a NULL pointer */
    head2 = NULL;
    free_listint_safe(&head2);

    return (0);
}
