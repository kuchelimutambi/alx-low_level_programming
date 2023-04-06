#include "main.h"

/**
 * set_bit - Sets the value of a bit at a given index to 1.
 * @n: Pointer to the number to modify.
 * @index: The index of the bit to set.
 * Return: 1 if successful, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int max_bits;
	unsigned long int mask = 1;

    /**
     * Validate that the index is within
     * the range of bits in an unsigned long int
    */
	max_bits = (sizeof(unsigned long int) * 8);
	if (index >= max_bits)
	{
		return (-1);
	}

    /* Create a mask with 1 at the index to set the bit at that index */
	mask <<= index;

    /* Apply the mask to set the bit */
	*n |= mask;
	return (1);
}
