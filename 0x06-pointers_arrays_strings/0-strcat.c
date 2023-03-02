#include "main.h"

/**
 * _strcat - appends the string pointed to by src to the end of the string pointed to by dest
 * @dest: This is pointer to the destination array, which should contain a C string, 
 * and should be large enough to contain the concatenated resulting string.
 * @src: This is the string to be appended. This should not overlap the destination.
 *
 * Return: a pointer to @desk
 */

{
	int index_01 = 0;
	int index_02 = 0;

	while (dest[index_01] != '\0')
	{
		index_01++;
	}

	while (src[index_02] != '\0')
	{
		dest[index_01 + index_02] = src[index_02];
		index_02++;

	}
	dest[index_01 + index_02] = '\0';

	return (dest);
}
