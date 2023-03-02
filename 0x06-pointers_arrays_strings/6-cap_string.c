#include "main.h"

/**
* is_sep - check if a char is a seperator.
* @s: the char to test.
*
* Return: 1 if seperator is found else 0
*/
int is_sep(char s)
{
	char sep[] = {'\t', '\n', ' ', ',', ';', '!',
		      '.', '?', '\"', '(', ')', '{', '}'};
	int i = 0;

	while (sep[i] != '\0')
	{
		if (s == sep[i])
			return (1);
		i++;
	}
	return (0);
}
