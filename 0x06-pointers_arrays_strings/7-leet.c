#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @str: The input string to encode
 *
 * Return: The encoded string
 */
char *leet(char *str)
{
	int i, j;
	char letters[] = "aAeEoOtTlL";
	char replace[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = replace[j];
				break;
			}
		}
	}
	return (str);
}

