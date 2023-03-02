#include "main.h"                                                                                                                       
#include <stdio.h>                                                                                                                      
                                                                                                                                        
/**                                                                                                                                     
 * print_buffer - This command prints the current buffer.                                                                                 
 * @b: The buffer to be printed.                                                                                                        
 * @size: The number of bytes to be printed from the buffer.                                                                            
 */                                                                                                                                     
void print_buffer(char *b, int size)                                                                                                    
{                                                                                                                                       
        int byte, index_01;
        
        for (byte = 0; byte < size; byte += 10)                                                                                         
        {                                                                                                                               
                printf("%08x: ", byte);                                                                                                 
                for (index_01 = 0; index_01 < 10; index_01++)                                                                                    
                {                                                                                                                       
                        if ((index_01 + byte) >= size)                                                                                     
                                printf("  ");                                                                                           
                         else                                                                                                            
                                printf("%02x", *(b + index_01 + byte));                                                                    
                        if ((index_01 % 2) != 0 && index_01 != 0)                                                                             
                                printf(" ");                                                                                            
                }                                                                                                                       
                for (index_01 = 0; index_01 < 10; index_01++)                                                                                    
                {                                                                                                                       
                        if ((index_01 + byte) >= size)                                                                                     
                else if (*(b + index_01 + byte) >= 31 && *(b + index_01 + byte) <= 126)                                                                            
                                printf("%c", *(b + index_01 + byte));                                                                      
                else                                                                                                            
                                printf(".");                                                                                            
                }                                                                                                                       
                if (byte >= size)                                                                                                       
                        continue;                                                                                                       
                printf("\n");                                                                                                           
        }                                                                                                                               
        if (size <= 0)                                                                                                                  
                printf("\n");                                                                                                           
}
