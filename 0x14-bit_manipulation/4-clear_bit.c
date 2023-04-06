#include "main.h"

/**
 * clear_bit - Sets the value of a bit at a given index to 0.
 * @n: Pointer to the number to modify.
 * @index: The index of the bit to clear.
 * Return: 1 if successful, or -1 if an error occurred.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
    unsigned long int max_bits;
    unsigned long int mask = 1;

    max_bits = (sizeof(unsigned long int) * 8);
    if (index >= max_bits)
    {
        return (-1);
    }

    mask <<= index;
    mask = ~mask;

    /* Apply the mask to clear the bit */
    *n = (*n & mask);

    return (1);
}
