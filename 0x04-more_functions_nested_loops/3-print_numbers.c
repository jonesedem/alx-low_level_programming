#include "main.h"

/**
 * print_numbers - Prints the numbers from 0 to 9
 *
 * Return: Nothing
 */
void print_numbers(void)
{
int i;

for (i = 0; i <= 9; i++)
{
_putchar(i + '0');
}
_putchar('\n');
}

