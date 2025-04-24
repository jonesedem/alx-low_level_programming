#include "main.h"

/**
 * print_number - Prints a number using only _putchar
 * @n: The number to print
 */
void print_number(int n)
{
	if (n >= 100)
	{
		_putchar(n / 100 + '0');
		_putchar((n / 10) % 10 + '0');
		_putchar(n % 10 + '0');
	}
	else if (n >= 10)
	{
		_putchar(' ');
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else
	{
		_putchar(' ');
		_putchar(' ');
		_putchar(n + '0');
	}
}

/**
 * print_times_table - Prints the n times table starting from 0
 * @n: The number of the times table
 */
void print_times_table(int n)
{
	int i, j, product;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			product = i * j;

			if (j == 0)
			{
				_putchar(product + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				print_number(product);
			}
		}
		_putchar('\n');
	}
}

