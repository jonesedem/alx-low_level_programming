#include "main.h"

/**
 * infinite_add - Adds two numbers stored as strings.
 * @n1: First number (string)
 * @n2: Second number (string)
 * @r: Buffer to store result
 * @size_r: Buffer size
 *
 * Return: Pointer to result, or 0 if result can't fit in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, k = 0, l = 0;
	int a, b, sum = 0, carry = 0;

	while (n1[i] != '\0') i++;
	while (n2[j] != '\0') j++;

	i--;
	j--;
	k = 0;

	while (i >= 0 || j >= 0 || carry)
	{
		if (k >= size_r - 1)
			return (0);
		a = (i >= 0) ? n1[i--] - '0' : 0;
		b = (j >= 0) ? n2[j--] - '0' : 0;
		sum = a + b + carry;
		r[k++] = (sum % 10) + '0';
		carry = sum / 10;
	}
	r[k] = '\0';

	/* Reverse the result */
	for (i = 0, k--; i < k; i++, k--)
	{
		l = r[i];
		r[i] = r[k];
		r[k] = l;
	}
	return (r);
}

