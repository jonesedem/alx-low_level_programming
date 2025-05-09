#include "main.h"
#include <stdio.h>

void print_buffer(char *b, int size)
{
    int i, j;
    
    if (size <= 0)
    {
        printf("\n");
        return;
    }

    for (i = 0; i < size; i += 10)
    {
        /* Print the address of the first byte in the line */
        printf("%08x: ", i);

        /* Print the hexadecimal values of the buffer (up to 10 bytes per line) */
        for (j = 0; j < 10; j++)
        {
            if (i + j < size)
                printf("%02x ", b[i + j]);
            else
                printf("   ");  /* Print spaces for missing bytes */
        }

        /* Print the printable characters or a dot (.) */
        for (j = 0; j < 10; j++)
        {
            if (i + j < size)
            {
                if (b[i + j] >= 32 && b[i + j] <= 126)
                    printf("%c", b[i + j]);
                else
                    printf(".");
            }
        }

        printf("\n");
    }
}

