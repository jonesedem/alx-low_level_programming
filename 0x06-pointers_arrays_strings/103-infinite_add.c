#include "main.h"

/**
 * infinite_add - Adds two numbers stored as strings
 * @n1: First number (string)
 * @n2: Second number (string)
 * @r: Buffer to store result
 * @size_r: Size of buffer
 *
 * Return: Pointer to result, or 0 if result cannot be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, carry = 0, n1_len = 0, n2_len = 0, sum = 0;
	int k;

	while (n1[n1_len] != '\0')
		n1_len++;
	while (n2[n2_len] != '\0')
		n2_len++;

	if (n1_len > size_r - 1 || n2_len > size_r - 1)
		return (0);

	i = n1_len - 1;
	j = n2_len - 1;
	k = size_r - 2;
	r[size_r - 1] = '\0';

	while (i >= 0 || j >= 0 || carry)
	{
		sum = carry;
		if (i >= 0)
			sum += n1[i--] - '0';
		if (j >= 0)
			sum += n2[j--] - '0';

		if (k < 0)
			return (0);

		r[k--] = (sum % 10) + '0';
		carry = sum / 10;
	}

	return (r + k + 1);
}

