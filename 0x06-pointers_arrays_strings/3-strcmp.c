#include "main.h"

/**
 * _strncpy - this fuction will concatenates two strings
 * @dest: the string that will be modified.
 * @src: the string that will be concatenated to @dest.
 * @n: how much to copy from src into dest.
 *
 * Return: a pointer to @dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char s1 = 0;

	for (s1 = 0; s1 < n && src[s1] != '\0'; s1++)
		dest[s1] = src[s1];
	for ( ; s1 < n ; s1++)
		dest[s1] = '\0';

	return (dest);
}
