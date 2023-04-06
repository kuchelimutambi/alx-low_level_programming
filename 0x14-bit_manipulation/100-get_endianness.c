#include "main.h"

/**
 * get_endianness - checks if multibyte data is stored as little or big endian
 * Return: 0 if big endian, 1 if little
 */

int get_endianness(void)
{
	int num = 0x00000001;
	char *ptr = (char *)&num;

	if (*ptr == 1)
		return (1);
	else
		return (0);
}
