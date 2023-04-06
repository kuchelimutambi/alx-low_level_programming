#include "main.h"

/**
 * get_bit - Returns the value of the bit at a given index.
 *@n: The number to extract the bit from.
 * @index: The index of the bit to extract.
 * Return: The value of the bit at the given index, or -1 if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	/**
	 * Validate that the index is within the
	 * range of bits in an unsigned long int
	 */
	unsigned int max_bits = (sizeof(unsigned long int) * 8);
	if (index >= max_bits)
	{
		return (-1);
	}
	
	/**
	 * Shift the number right by the
	 * index and extract the bit at the end
	 */
	int bit = ((n >> index) & 1);

	return (bit);
}
