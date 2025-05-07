#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string to append
 *
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	/* find end of dest string */
	while (dest[i] != '\0')
		i++;

	/* append src string to dest */
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0'; /* add null terminator */
	return (dest);
}

