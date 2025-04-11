#include <stdio.h>

/**
 * main - Prints all possible different combinations of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			putchar(i + 48);
			putchar(j + 48);

			if (i < 8)
			{
				putchar(44); /* ASCII for ',' */
				putchar(32); /* ASCII for space */
			}
		}
	}
	putchar('\n');
	return (0);
}

