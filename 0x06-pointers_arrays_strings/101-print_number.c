#include "main.h"

/**
 * print_number - Prints an integer using only _putchar
 * @n: The integer to print
 */
void print_number(int n)
{
	int power = 1;
	int temp = n;

	if (n < 0)
	{
		_putchar('-');
		temp = -temp;
	}

	while (temp / power > 9)
	{
		power *= 10;
	}

	while (power > 0)
	{
		_putchar((temp / power) + '0');
		temp %= power;
		power /= 10;
	}
}

