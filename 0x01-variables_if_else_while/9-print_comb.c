#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
		if (n < 9)
		{
			putchar(44); /* ASCII for ',' */
			putchar(32); /* ASCII for space */
		}
	}
	putchar('\n');
	return (0);
}

