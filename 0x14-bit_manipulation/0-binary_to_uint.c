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
    	{
        return (0);
    	}

    	unsigned int result = 0;
    	size_t len = strlen(b);
    	int i;

    	for (i = 0; i < len; i++)
    	{
        if (isdigit(b[i]))
        {
        result = result << 1;
        if (b[i] == '1')
        {
        result |= 1;
        }
        }
        else
        {
        return (0);
        }
    	}	

    	return (result);

	return (sum);

	/* Find string length */
	while (b[len] != '\0')
	len++;
	len -= 1;

	/* Iterate string and multiply by power of 2 if character is '1' */
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
