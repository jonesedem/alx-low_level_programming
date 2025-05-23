#include <stdio.h>

/**
 * main - Prints all combinations of two two-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 100; i++)
	{
		for (j = i + 1; j < 100; j++)
		{
			putchar((i / 10) + 48);
			putchar((i % 10) + 48);
			putchar(32); /* space */
			putchar((j / 10) + 48);
			putchar((j % 10) + 48);

			if (!(i == 98 && j == 99))
			{
				putchar(44); /* comma */
				putchar(32); /* space */
			}
		}
	}
	putchar('\n');
	return (0);
}

