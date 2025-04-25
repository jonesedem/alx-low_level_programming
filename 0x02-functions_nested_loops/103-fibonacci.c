#include <stdio.h>

/**
 * main - Prints the sum of even Fibonacci numbers below 4,000,000
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int a = 1, b = 2, next;
	unsigned long int sum = 0;

	while (b <= 4000000)
	{
		if (b % 2 == 0)
			sum += b;

		next = a + b;
		a = b;
		b = next;
	}

	printf("%lu\n", sum);
	return (0);
}

