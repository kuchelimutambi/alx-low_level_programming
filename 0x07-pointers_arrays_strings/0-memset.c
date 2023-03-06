#include "main.h"

/**
 * _memset - fill n bytes of memory with a constant value
 * @s: pointer to the memory
 * @b: constnt value
 * @n: number of bytes to fill
 * Return: memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
