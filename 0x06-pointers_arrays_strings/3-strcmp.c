#include "main.h"

/**
 * _strncpy - this fuction will concatenates two strings
 * @dest: the string that will be modified.
 * @src: the string that will be concatenated to @dest.
 * @n: how much to copy from src into dest.
 *
 * Return: a pointer to @dest
 */
<<<<<<< HEAD

int _strcmp(char *s1, char *s2)
=======
char *_strncpy(char *s1, char *s2, int n)
>>>>>>> 047dea238c55152860eb653a01186e5f8e5ab4d7
{
	int i = 0;

	while (*(s1 + i) == *(s2 + i) && *(s1 + i))
		i++;

	if (*(s2 + i))
		return (*(s1 + i) - *(s2 + i));
	else
		return (0);
}
