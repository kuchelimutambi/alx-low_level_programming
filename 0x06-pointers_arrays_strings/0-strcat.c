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
	char s1 = 0;
	char s2 = 0;

	while (dest[s1] != '\0')
	{
		s1++;
	}

	while (src[s2] != '\0')
	{
		dest[s1 + s2] = src[s2];
		s2++;

	}
	dest[s1 + s2] = '\0';

	return (dest);
}
