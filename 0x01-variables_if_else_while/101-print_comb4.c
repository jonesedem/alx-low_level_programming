#include <stdio.h>

/**
 * main - Prints all possible different combinations of three digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i < 8; i++)
	{
		for (j = i + 1; j < 9; j++)
		{
			for (k = j + 1; k < 10; k++)
			{
				putchar(i + 48);
				putchar(j + 48);
				putchar(k + 48);

				if (!(i == 7 && j == 8 && k == 9))
				{
					putchar(44); /* comma */
					putchar(32); /* space */
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

