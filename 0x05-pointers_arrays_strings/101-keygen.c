#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates a random valid password for 101-crackme
 *
 * Return: 0 on success
 */
int main(void)
{
	int sum = 0;
	int ch;

	srand(time(NULL));

	while (sum < 2772)
	{
		ch = rand() % 94 + 33; /* printable ASCII range: 33 to 126 */
		if (sum + ch > 2772)
			break;
		sum += ch;
		printf("%c", ch);
	}

	/* Print the last character to make total sum 2772 */
	printf("%c", 2772 - sum);

	return (0);
}

