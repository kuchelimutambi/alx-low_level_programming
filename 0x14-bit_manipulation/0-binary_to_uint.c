#include "main.h"

/**
 * binary_to_uint - Convert a binary string to an unsigned integer
 * @b: The binary string to convert
 * Return: The unsigned integer result of the conversion, or 0 if b is NULL
 */
 
unsigned int binary_to_uint(const char *b)

{

	int len = 0, i;
	unsigned int sum = 0;

	if (b == NULL)
		return (0);

	/* find string length */
	while (b[len] != '\0')
		len++;
	len -= 1;

	/* iterate string and if '1' then multiply by power of 2 */
	/* get power of 2 via binary (e.g. 1<<2 = 100 in binary = 4) */
	i = 0;
	while (b[i])
	{
		if ((b[i] != '0') && (b[i] != '1'))
			return (sum);

		if (b[i] == '1')
			sum += (1 * (1 << len));
		i++;
		len--;
	}

	return (sum);
}
