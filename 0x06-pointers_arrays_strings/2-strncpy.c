#include "main.h"

/**
 * _strncpy - copies a string from src to dest
 * @dest: destination string
 * @src: source string
 * @n: maximum number of bytes to copy from src
 *
 * Return: pointer to the destination string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
    int i = 0;

    /* copy up to n bytes from src to dest */
    while (i < n && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }

    /* if n is greater than length of src, pad with '\0' */
    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }

    return (dest);
}

