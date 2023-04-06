#include "main.h"

/**
 * flip_bits - determine how many bits to flip to get from one num to another
 * @n: number
 * @m: number2
 * Return: how many bits differ
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
    unsigned int diff_bits = 0;
    unsigned long int difference = n ^ m;

    // Count the number of bits that are different
    while (difference > 0)
    {
        if (difference & 1)
            diff_bits++;
        difference >>= 1;
    }

    return diff_bits;
}
