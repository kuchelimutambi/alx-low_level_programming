#include "main.h"

/**
 * _strcat - appends the string pointed to by src to the end of the string pointed to by dest
 * @dest: This is pointer to the destination array, which should contain a C string, 
 * and should be large enough to contain the concatenated resulting string.
 * @src: This is the string to be appended. This should not overlap the destination.
 *
 * Return: a pointer to @dest
 */
char *_strcat(char *dest, char *src)
{
	char dest[20];
	char src[20];

	strcat(dest, src);

	return (dest);
}

