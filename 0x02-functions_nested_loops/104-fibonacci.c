#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long a = 1, b = 2, temp;
	unsigned long a1, a2, b1, b2;
	int count;

	printf("%lu, %lu", a, b);

	count = 2;
	while (count < 98)
	{
		if (b < 10000000000000000000UL)
		{
			temp = a + b;
			a = b;
			b = temp;
			printf(", %lu", b);
		}
		else
		{
			a1 = a / 1000000000;
			a2 = a % 1000000000;
			b1 = b / 1000000000;
			b2 = b % 1000000000;

			temp = a2 + b2;
			a2 = b2;
			a1 = b1;

			if (temp >= 1000000000)
			{
				b2 = temp % 1000000000;
				b1 = a1 + b1 + 1;
			}
			else
			{
				b2 = temp;
				b1 = a1 + b1;
			}

			printf(", %lu%09lu", b1, b2);

			a1 = b1 - (temp >= 1000000000 ? 1 : 0);
			a2 = b2;
		}
		count++;
	}
	printf("\n");
	return (0);
}

