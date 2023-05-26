#include "main.h"
#include "mystring.h"
#include <stdio.h>

/**
 * main - check the code
 * -strlen - function used to calculate the length of a null-terminated string
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    printf("%d\n", _strlen("My Dyn Lib"));
    return (EXIT_SUCCESS);
}
