#include <stdio.h>

#define LIMIT 1000000000

/**
 * print_fib - prints a large Fibonacci number from two parts
 * @hi: the high part (left side of the number)
 * @lo: the low part (right side of the number, padded if needed)
 */
void print_fib(unsigned long hi, unsigned long lo)
{
	if (hi)
		printf(", %lu%09lu", hi, lo);
	else
		printf(", %lu", lo);
}

/**
 * main - prints the first 98 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int count;
	unsigned long a_hi = 0, a_lo = 1;
	unsigned long b_hi = 0, b_lo = 2;
	unsigned long next_hi, next_lo;

	printf("%lu, %lu", a_lo, b_lo);

	for (count = 2; count < 98; count++)
	{
		next_lo = a_lo + b_lo;
		next_hi = a_hi + b_hi;

		if (next_lo >= LIMIT)
		{
			next_lo -= LIMIT;
			next_hi += 1;
		}

		print_fib(next_hi, next_lo);

		a_lo = b_lo;
		a_hi = b_hi;
		b_lo = next_lo;
		b_hi = next_hi;
	}
	printf("\n");
	return (0);
}

