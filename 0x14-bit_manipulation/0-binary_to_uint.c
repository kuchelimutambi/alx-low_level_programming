#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars representing a binary number
 *
 * Return: the converted number, or 0 if there is one or more chars in the
 *         string b that is not 0 or 1, or if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
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
}
