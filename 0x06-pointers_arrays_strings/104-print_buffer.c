#include <stdio.h>
#include "main.h"

/**
 * simple_print_buffer - THis prints buffer in hexa
 * @buffer: This is the address of memory to print
 * @size: this is the size of the memory to print
 *
 * Return: Nothing.
 */

void simple_print_buffer(char *buffer, unsigned int size)
{
        unsigned int x;

        x = 0;
        while (x < size)
        {
                if (x % 10)
                {
                        printf(" ");
                }
                if (!(x % 10) && x)
                {
                        printf("\n");
                }
                printf("0x%02x", buffer[x]);
                x++;
        }
  
        printf("\n");
}
